#include <iostream> 
#include <cmath>

// First exercise for variables. This program finds the hyphenuse travel time and 
// a initial segment travel time.
void hypothenuse(){
    // Variable declarations
    double road_speed = 5;
    int terrain_speed = 2;
    int dx = 3; // refers to the horizontal distance of the robot 
    int dy = 10; // refers to the vertical distance of the robot
    double segment_l = 6;
    double dh =  sqrt(pow(3, 2) + pow((dy - segment_l), 2));

    double segment1_time = segment_l/road_speed;
    double segment2_time = dh/terrain_speed;

    std::cout << "The total time to travel is: " << segment1_time + segment2_time ;
}

/*This program find the amout of stamps a costumer can buy with an inserted amount 
of money*/
void buyStamps(){
    float c_money = 0.0;
    const float stamp_price = 0.47; 
    std::cin >> c_money;

    int total_stamps = c_money / stamp_price;
    int price_h = 47;
    int money_h = c_money*100;
    float penny_stamp = (money_h%price_h)/100.0;

    std::cout << "Total stamps outputted: " << total_stamps << std::endl;
    std::cout << "change: " << penny_stamp << std::endl;
}

/*E2.10 This program(function) asks the use to iput:
the number of gallons of gas in the tank
the fuel efficiency of the vehicle 
and the price of the gas per gallon */
void gasEfficiency(){
    int gas_tank;
    int fuel_efficiency;
    float price_gallon;

    std::cout << "input number of gallons in the gas tank: ";
    std::cin >> gas_tank;
    std::cout << "\ninput the fuel efficiency of the vehicle: ";
    std::cin >> fuel_efficiency;
    std::cout << "\ninput the price of the gas per gallon: ";
    std::cin >> price_gallon;

    std::cout << "\nThe total price of gas per 100 miles is: " << 100*price_gallon;
    std::cout << "\nThe far can go for: " << gas_tank * fuel_efficiency << " miles with " << gas_tank << "gallons in the tank.";
}

int main(){
    // hypothenuse();
    // buyStamps();
    gasEfficiency();
    return 0;
}