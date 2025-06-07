#include <iostream>
const int miles = 15000;

struct car{
    int iCost;
    int mpg;
};

int findCheaper(car arry[], int size){
    int index = 0; 
    int min = arry[0].iCost + ((miles/arry[0].mpg)*10) ;
    for(int i = 0; i < size; ++i){
        if((arry[i].iCost + ((miles/arry[i].mpg)*10)) < min){
            index = i;
        }
    }
    return index + 1;
};

int main(int argc, char** argv){
    car car1;
    car1.iCost = 20000; car1.mpg = 50;
    car car2;
    car2.iCost = 25000; car2.mpg = 30;

    car array[2];
    int size = sizeof(array) / sizeof(array[0]);
    array[0] = car1;
    array[1] = car2;

    std::cout << "The cheaper car is: " << findCheaper(array, size) << std::endl;
    return 0;
}