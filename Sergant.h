#pragma once

#include "Soldier.h"
#include "String.h"
#include "Container.h"

class Sergant : public Soldier
{
public:
    Sergant();
    explicit Sergant(const String& name, const int age, const int level, const double salary, const String& description);

    void addSoldier(const Soldier& soldier);
    void removeSoldier(int index);

    int getTotalLevel() const;

private:
    String description;
    Container<Soldier> soldiers;
};