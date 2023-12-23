#ifndef __ARMOR_HPP__
#define __ARMOR_HPP__

#include <string>
class Armor {
protected:
    virtual void donArmor() = 0;
public:
    // virtual ~Armor();
    std::string ArmorType;
};

class HeavyArmor : public Armor {
    void donArmor() override {
        ArmorType = "Heavy";
    }
public:
    // virtual ~HeavyArmor();
    HeavyArmor() { donArmor(); }
};

class MediumArmor : public Armor {
    void donArmor() override {
        ArmorType = "Medium";
    }
public:
    // virtual ~MediumArmor();
    MediumArmor() { donArmor(); }
};

class LightArmor : public Armor {
    void donArmor() override {
        ArmorType = "Light";
    }
public:
    // virtual ~LightArmor();
    LightArmor() { donArmor(); }
};

#endif