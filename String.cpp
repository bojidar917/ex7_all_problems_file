#include <cstring>

#include "String.h"

String::String() : str(nullptr)
{
}

String::String(const char *str) : String()
{
    try
    {
        this->str = new char[strlen(str) + 1];
        strcpy(this->str, str);
    }
    catch(...)
    {
        clear();
    }
}

String::String(const String &other)
{
    copy(other);
}

String &String::operator=(const String &other)
{
    if(this != &other)
    {
        clear();
        copy(other);
    }

    return *this;
}

String::~String()
{
    clear();
}

void String::copy(const String& other)
{
    if(other.str != nullptr)
    {
        this->str = new char[strlen(other.str) + 1];
        strcpy(this->str, other.str);
    }
    else this->str == nullptr;
}

void String::clear()
{
    if(this->str != nullptr)
        delete [] this->str;
}
