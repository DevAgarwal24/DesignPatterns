#ifndef __BIKE_HPP__
#define __BIKE_HPP__

#include "vehicle.hpp"

class Bike : public Vehicle {
public:
    virtual void createVehicle() override;
};

#endif