#include "String.h"
#include "Magician.h"
#include "Container.h"
#include "Soldier.h"

class Captain : public Soldier
{
public:
    Captain();
    Captain(const String& name, const int age, const int level, const double salary, const String& descr);

    void addMagician(const Magician& magician);
    void removeMagician(const int index);

    int getTotalLevel() const;

    int getTotalMagicLevel() const;

private:
    String descr;
    Container<Magician> magicians;
};