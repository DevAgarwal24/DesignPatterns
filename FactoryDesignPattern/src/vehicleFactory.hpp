#ifndef __VEHICLE_FACTORY_HPP__
#define __VEHICLE_FACTORY_HPP__

#include <iostream>
#include "car.hpp"
#include "bike.hpp"

using namespace std;

class VehicleFactory {
public:
    // When we make a function static we can access the function without the object of the class
    static Vehicle* getVehicle(string vehicleType);
};

#endif