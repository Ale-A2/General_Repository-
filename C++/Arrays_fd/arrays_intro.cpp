#include <iostream>
#include <array>

int main(){
    std::array<int,10> local;
    int index = 0;
    std::cout << "[ " ;
    while( index < 10){
        local[index] = (index + 1) * 3;
        std::cout << local[index];
        if(index + 1 < 10){
            std::cout << ",";
        }
        index += 1; 
    }
    std::cout << " ]"<< std::endl;

    std::cout << std::endl << std::endl;

    //c.front() == *c.begin() where c is a container
    std::cout << "location: " << &local.front() << " value: " << local.front(); //front can only access the first element(no iterator like behavior)
    local.front() = 20; // just as using c[0];
    std::cout << std::endl << std::endl;

    std::cout << "new front value: " << local.front();

    std::cout << std::endl << std::endl;
    
    std::cout << "location: " << &local.back() << " value: " << local.back(); //front can only access the first element(no iterator like behavior)
    local.back() = 13; // just as using c[0];
    std::cout << std::endl << std::endl;

    std::cout << "new back value: " << *(local.end() -1) ; //another way to acess last element is 
    // array indexing: local[local.size() -1 ] or *std::prev(local.end());
    std::cout << std::endl << std::endl;

    std::cout << "[ " ;
    index = 0;
    while( index < 10){
        std::cout << local[index];
        if(index + 1 < 10){
            std::cout << ",";
        }
        index += 1; 
    }
    std::cout << " ]"<< std::endl;

    std::cout << std::endl << std::endl;

    std::cout << local.data();
    int* add_of = local.data();
    int* end_ptr = local.data() + local.size();
    std::cout << "XXXX Printing throught data() XXXX";
    while(add_of < end_ptr){
        std::cout << std::endl << add_of << " "; 
        std::cout << *add_of;
        add_of++;
    }



    return 0;
}