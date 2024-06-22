#pragma once

#include "String.h"

class Magic
{
public:
    Magic();
    Magic(const String& description, const String& type, const int magicPowerRequired);

    int getMagicPowerRequired() const { return magicPowerRequired; }

private:
    String description;
    String type;
    int magicPowerRequired;
};