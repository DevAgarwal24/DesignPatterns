// When we have some sort of interface and we decide to kind of simplify it with an interface on top of that
// interface. It's similar to adapter and can be interchanged in some cases.

#ifndef __FACADE_HPP__
#define __FACADE_HPP__

#include "armor.hpp"

class ArmorBuilderFacade {
public:
    ArmorBuilderFacade() {
        _heavyArmor = new HeavyArmor();
        _mediumArmor = new MediumArmor();
        _lightArmor = new LightArmor();
    }

    ~ArmorBuilderFacade() {
        delete _heavyArmor;
        delete _mediumArmor;
        delete _lightArmor;
    }

    std::string getHeavyArmor() { return _heavyArmor->ArmorType; }
    std::string getMediumArmor() { return _mediumArmor->ArmorType; }
    std::string getLightArmor() { return _lightArmor->ArmorType; }

private:
    HeavyArmor *_heavyArmor;
    MediumArmor *_mediumArmor;
    LightArmor *_lightArmor;
};

#endif
