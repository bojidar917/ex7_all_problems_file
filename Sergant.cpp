#include "Sergant.h"

Sergant::Sergant()
{}

Sergant::Sergant(const String& name, const int age, const int level, const double salary, const String &description) 
    : Soldier(name, age, level, salary)
{
    this->description = description;
}

void Sergant::addSoldier(const Soldier &soldier)
{
    this->soldiers.addElement(soldier);
}

void Sergant::removeSoldier(int index)
{
    this->soldiers.removeElement(index);
}

int Sergant::getTotalLevel() const
{
    int total = 0;
    for (int i = 0; i < this->soldiers.getSize(); i++)
    {
        total += this->soldiers[i].getLevel();
    }

    total += this->getLevel();
    
    return total;
}
