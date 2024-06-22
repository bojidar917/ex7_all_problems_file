#include "Magic.h"

Magic::Magic() : description(""), type(""), magicPowerRequired(0)
{
}

Magic::Magic(const String &description, const String &type, const int magicPowerRequired)
    : description(description), type(type), magicPowerRequired(magicPowerRequired)
{
}
