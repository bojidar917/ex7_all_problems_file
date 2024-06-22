#pragma once

#include "Soldier.h"
#include "MagicBook.h"
#include "String.h"
#include "Container.h"
#include "Sergant.h"
#include "Magic.h"

class Magician : public Soldier
{
public:
    Magician();
    Magician(const String& name, const int age, const int level, const double salary, const String& descr, int magicPower);

    void addSergant(const Sergant& sergant);
    void removeSergant(int index);

    void addMagic(const Magic& magic);
    void useMagic(int index);

    int getTotalLevel() const;

    int getMagicPower() const {return this->magicPower;}

private:
    String descr;
    Container<Sergant> sergants;
    int magicPower;
    MagicBook magicBook;
};