#include <iostream>
#include <vector>


int main() {
    std::vector<std::vector<int>> v = {{1, 2, 3},
                             {4, 5, 6},
                             {7 ,8 ,9}};
  
  	// Loop through rows
    for (int i = 0; i < v.size(); i++) {
      
      	// Loop through columns
        for (int j = 0; j < v[i].size(); j++)
            std::cout << v[i][j] << " ";
        std::cout << std::endl;
    }

    return 0;
}