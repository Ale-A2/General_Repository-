#include <iostream> 
#include <map>
#include <string>
#include <algorithm>
#include <vector>

std::string toBinary(int number){
    std::string binary = "";
    while(number > 0){
        if(number % 2 == 0){
            binary.push_back('0');
        } else 
            binary.push_back('1');

        number = number/2;
    }

    reverse(binary.begin(), binary.end());
    return binary;
}

int findDistance(const std::string& binary){
    int max_distance = -1;
    int cur_distance = 0;

    if(binary.length() == 1){
        return max_distance;
    }

    bool two_ = false;
    int left = 0, right = 1;
    while(right < binary.length()){
        if(binary[right] == '0'){
            cur_distance++;
            if(cur_distance > max_distance){
                max_distance = cur_distance;
            }
        } else if(binary[right] == '1'){
            cur_distance = 0;
            two_ = true;
            left = right;
        }
    }

    if(two_ == false){
        return -1;
    }

    return max_distance;
}

std::vector<int> getTopKBitDistance(std::vector<int> numbers, int k){
    // if(numbers.size()){
    //     return std::vector<int> {};
    // }
    // std::map<int,int, greater<int>> distances;
    // for(int i = 0; i < numbers.size(); i++){
    //     int dis = findDistance(toBinary(numbers[i]));
    //     distances[dis] = numbers[i];
    // }

    // std::vector<int> topK;
    // auto it = distances.begin();
    // auto next = distances.begin() ++;

    // for(int i = 0; i < k; i++){

    //     if()
    // }
}
int main(){
    int n = 20;
    std::string x;
    std::cout << "This is the number in: " << toBinary(20) << std::endl;
}