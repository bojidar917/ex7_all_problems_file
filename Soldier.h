#pragma once

#include "String.h"

class Soldier
{
public:
    Soldier();
    Soldier(const String& name, const int age, const int level, const double salary);

    int getLevel() const { return level; }

private:
    String name;
    int age;
    int level;
    double salary;
};