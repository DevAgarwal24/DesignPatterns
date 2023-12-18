#ifndef __CAR_HPP__
#define __CAR_HPP__

#include "vehicle.hpp"

class Car : public Vehicle {
public:
    virtual void createVehicle() override;
};

#endif