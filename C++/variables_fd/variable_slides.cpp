#include <iostream>

void calculateGallong(){
    int cans_per_pack = 6;
    const double CAN_VOLUME = 0.355; // Liters in a 12-ounce can
    double total_volume = cans_per_pack * CAN_VOLUME;

    std::cout << "A six-pack of 12-ounce cans contains "
    << total_volume << " liters." << std::endl;

    const double BOTTLE_VOLUME = 2; // Two-liter bottle
    total_volume = total_volume + BOTTLE_VOLUME;

    std::cout << "A six-pack and a two-liter bottle contain "
    << total_volume << " liters." << std::endl;
}

int main(){
    calculateGallong();
    return 0;
}