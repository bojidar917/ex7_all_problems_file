#include "MagicBook.h"

MagicBook::MagicBook() : pageCount(1)
{
}

void MagicBook::addMagic(const Magic &magic)
{
    this->pages.addElement(magic);
    pageCount++;
}

void MagicBook::useMagic(int index)
{
    this->pages.removeElement(index);
    pageCount--;
}
