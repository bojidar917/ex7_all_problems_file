#include <iostream>
#include "Soldier.h"
#include "Sergant.h"
#include "Magician.h"
#include "Captain.h"

int main()
{

    Soldier soldier1("Ivan", 28, 50, 40);
    Soldier soldier2("Jivko", 24, 40, 50);
    Soldier soldier3("Zdravko", 14, 30, 20);
    Soldier soldier4("Pavel", 19, 20, 20);

    Sergant sergant1("Blago", 45, 70, 670, "sergant of the world");
    sergant1.addSoldier(soldier1);
    sergant1.addSoldier(soldier2);

    Sergant sergant2("Anton", 35, 67, 600, "sergan of the community");
    sergant1.addSoldier(soldier3);
    sergant1.addSoldier(soldier4);

    Magician magician("Anton", 35, 67, 600, "mag Ant", 1000);
    magician.addSergant(sergant1);

    Magician magician2("Kiril", 39, 70, 700, "mag Kiril", 1050);
    magician2.addSergant(sergant2);

    Captain cot("Punata", 67, 4000, 60000, "The men, the myth, the legend");
    cot.addMagician(magician);
    cot.addMagician(magician2);

    std::cout << cot.getTotalLevel() << std::endl;

    std::cout << cot.getTotalMagicLevel();

    return 0;
}