// The creation logic for the vehicle is loosely couple with the client
// Factory Design Pattern is a "Creational Design Pattern"

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
