#include "Soldier.h"

Soldier::Soldier() : name(""), age(0), level(0), salary(0)
{
}

Soldier::Soldier(const String &name, const int age, const int level, const double salary)
    : name(name), age(age), level(level), salary(salary)
{
}
