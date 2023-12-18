// The creation logic for the vehicle is loosely couple with the client

#include <iostream>
#include "vehicleFactory.hpp"

using namespace std;

int main()
{
    string vehicleType;
    cin >> vehicleType;

    Vehicle *vehicle = VehicleFactory::getVehicle(vehicleType);
    vehicle->createVehicle();

    return 0;
}