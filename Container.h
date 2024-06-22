#pragma once

#include <iostream>

template <typename Type>
class Container
{
public:
    Container();
    Container(const Container& other);
    Container& operator=(const Container& other);
    ~Container();

    Type& operator[](size_t index) const;

    void addElement(const Type& element);
    void removeElement(int index);

    int getSize() const { return this->size; }

private:
    Type* elements;
    int size;
    int capacity;

    void clear();
    void copy(const Container& other);
    void resize();
};

template <typename Type>
inline Container<Type>::Container() : elements(nullptr), size(0), capacity(0) {}

template <typename Type>
inline Container<Type>::Container(const Container& other) : elements(nullptr), size(0), capacity(0)
{
    copy(other);
}

template <typename Type>
inline Container<Type>& Container<Type>::operator=(const Container& other)
{
    if (this != &other)  // Corrected the comparison
    {
        clear();
        copy(other);
    }
    return *this;
}

template <typename Type>
inline Container<Type>::~Container()
{
    clear();
}

template <typename Type>
inline Type& Container<Type>::operator[](size_t index) const
{
    if (index >= static_cast<size_t>(size))  // Ensure index is within bounds
    {
        throw std::out_of_range("Index out of range");
    }
    return elements[index];
}

template <typename Type>
inline void Container<Type>::addElement(const Type& element)
{
    if (size >= capacity)
        resize();

    elements[size++] = element;
}

template <typename Type>
inline void Container<Type>::removeElement(int index)
{
    if (index < 0 || index >= size)  // Ensure index is within bounds
    {
        throw std::out_of_range("Index out of range");
    }

    for (int i = index; i < size - 1; i++)
    {
        elements[i] = elements[i + 1];
    }

    size--;
}

template <typename Type>
inline void Container<Type>::clear()
{
    delete[] elements;
    elements = nullptr;
    size = 0;
    capacity = 0;
}

template <typename Type>
inline void Container<Type>::copy(const Container& other)
{
    if (other.size > 0)
    {
        elements = new Type[other.capacity];
        for (int i = 0; i < other.size; i++)
        {
            elements[i] = other.elements[i];
        }
    }
    size = other.size;
    capacity = other.capacity;
}

template <typename Type>
inline void Container<Type>::resize()
{
    if (capacity == 0)
        capacity = 4;
    else
        capacity *= 2;

    Type* temp = new Type[capacity];

    for (int i = 0; i < size; i++)
    {
        temp[i] = elements[i];
    }

    delete[] elements;
    elements = temp;
}
