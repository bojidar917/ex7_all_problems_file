#pragma once

#include "Magic.h"
#include "Container.h"

class MagicBook
{
public:
    MagicBook();

    int getMagicPower(int index) const { return this->pages[index].getMagicPowerRequired();}

    void addMagic(const Magic& magic);
    void useMagic(int index);

private:
    Container<Magic> pages;
    int pageCount;
};