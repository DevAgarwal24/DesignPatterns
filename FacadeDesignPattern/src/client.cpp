#include <iostream>
#include "facade.hpp"

int main()
{
    ArmorBuilderFacade abf;

    std::cout << abf.getHeavyArmor() << std::endl;
    std::cout << abf.getMediumArmor() << std::endl;
    std::cout << abf.getLightArmor() << std::endl;

    return 0;
}