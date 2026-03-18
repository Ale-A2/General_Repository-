#include "functions.hpp"

void two_sum(int arr[], int contents[], int size, int target){
    std::unordered_map<int, int> seen; // a map that stores the viewed values and their index

    for(int i = 0; i < size; i++){
        int compliment = target - contents[i];

        if(seen.count(compliment)){
            arr[0] = seen[compliment];
            arr[1] = i;
            return;
        }

        seen[contents[i]] = i;
    }

    arr[0] = -1;
    arr[1] = -1;
}

// int main(){
//     int check[] = {2,7,8,10,5,3,6};
//     int size = sizeof(check)/sizeof(check[0]);

//     int final[2];

//     two_sum(final, check, size, 99);

//     std::cout << "{ " << final[0] << " : " << final[1] << " }";

//     return 0;
// }