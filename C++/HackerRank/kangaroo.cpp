#include <iostream>
#include <vector> 

void meet(int x1, int v1, int x2, int v2){
    int distanceA = x1 + v1;
    int distanceB = x2 + v2;
    bool meet = false;
    if(x1 == x2){
        std::cout << "Yes they start at the same point" << std::endl;
        return;
    }
    while(distanceA != distanceB && (distanceA <= 1E9 || distanceB <= 1E9)){
        distanceA = distanceA + v1;
        distanceB = distanceB + v2; 
    }
    if(distanceA == distanceB){
        meet = true;
    }
    else if ((distanceA <= 1E9 || distanceB <= 1E9) || !meet ){
        std::cout << "No" << std::endl;
        return;
    }
    std::cout << "Yes" << std::endl;
    std::cout << "A: " << distanceA << " " << std::endl << "B: " << distanceB;
}
int main(){
    int startingA, slopeA, startingB, slopeB;
    std::cout << "Fill in the data for the hops: " << std::endl;
        std::cin >> startingA;
        std::cin >>  startingB;
        std::cin >> slopeA;
        std::cin >> slopeB;

    meet(startingA,slopeA, startingB, slopeB);
    return 0;
}