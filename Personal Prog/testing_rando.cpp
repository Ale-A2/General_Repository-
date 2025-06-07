/*Author: Anthony Aleman
Course: CSCI-135
Intructor: Tong Yi
Assignment: Lab 2D


This program computes Fibonacci numbers*/

#include <iostream> 

int main(){
   int year = 0;

   std::cout << "Enter a number representing a year: "; std::cin >> year;
   std::cout << "\n\n";

   if(year%4 != 0){
        std::cout << "It is a common year";
   } else if(year%100 != 0){
    std::cout << "It is a leap year";
   } else if(year%400 != 0){
    std::cout << "It is a common year";
   } else {
        std::cout << "It is a leap year";
   }
   return 0;
}
