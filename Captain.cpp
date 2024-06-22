#include "Captain.h"

Captain::Captain()
{
}

Captain::Captain(const String& name, const int age, const int level, const double salary, const String &descr)
    : Soldier(name, age, level, salary), descr(descr)
{
}

void Captain::addMagician(const Magician &magician)
{
    this->magicians.addElement(magician);
}

void Captain::removeMagician(const int index)
{
    this->magicians.removeElement(index);
}

int Captain::getTotalLevel() const
{
    int total = 0;

    for (int i = 0; i < this->magicians.getSize(); i++)
    {
        total += this->magicians[i].getTotalLevel();
    }

    total += this->getLevel();
    
    return total;
}

int Captain::getTotalMagicLevel() const
{
    int total = 0;

    for (int i = 0; i < this->magicians.getSize(); i++)
    {
        total += this->magicians[i].getMagicPower();
    }
    
    return total;
}
