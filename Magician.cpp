#include <iostream>

#include "Magician.h"

Magician::Magician()
{
}

Magician::Magician(const String& name, const int age, const int level, const double salary, const String &descr, int magicPower)
    : Soldier(name, age, level, salary), descr(descr), magicPower(magicPower)
{
}

void Magician::addSergant(const Sergant &sergant)
{
    sergants.addElement(sergant);
}

void Magician::removeSergant(int index)
{
    sergants.removeElement(index);
}

void Magician::addMagic(const Magic &magic)
{
    this->magicBook.addMagic(magic);
}

void Magician::useMagic(int index)
{
    if(magicBook.getMagicPower(index) < this->magicPower)
    {
        this->magicBook.useMagic(index);
    }
    else
    {
        std::cout << "this magic is too powerfull" << std::endl;
    }
}

int Magician::getTotalLevel() const
{
    int total = 0;

    for (int i = 0; i < this->sergants.getSize(); i++)
    {
        total += this->sergants[i].getTotalLevel();
    }

    total += this->getLevel();
    
    return total;
}
