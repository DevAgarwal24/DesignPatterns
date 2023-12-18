#include "vehicleFactory.hpp"

Vehicle* VehicleFactory::getVehicle(string vehicleType) {

    Vehicle *vehicle = NULL;

    if (vehicleType == "car") {
        vehicle = new Car();
    } else if (vehicleType == "bike") {
        vehicle = new Bike();
    } else {
        cout << "Wrong Input\n";
    }

    return vehicle;
}