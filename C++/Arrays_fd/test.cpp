#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main(int argc, char* argv[]){
    // int s = 0;
    // std::cout << "Choose size of the list";
    // std::cin >> s;
    // int ar[s][s]; // unitialized list 
    // srand(time(0));
    // // Initialize the entire array
    // for(int i = 0; i < s; i++){
    //     for(int j = 0; j < s; j++){
    //         ar[i][j] = rand() % 100;
    //         std::cout << ar[i][j] << " || "; 
    //    }
    //    std::cout << std::endl;
    // }

    // int arr2[16];
    // int count = 0;
    // for(int i = 0; i < s - 2; i++){
    //     for(int j = 0; j < s - 2; j++){
    //         arr2[count] = ar[i][j] + ar[i][j+1] + ar[i][j+2] +     // top row
    //                      ar[i+1][j+1] +                           // middle center
    //                      ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2]; // bottom row
    //         count++;   
    //    }
    //    std::cout << std::endl;
    // }

    // std::cout << std::endl << std::endl;

    // int max = -1000;
    // for(int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++){
    //     std::cout << arr2[i] << " || "; 
    //     if(max < arr2[i]){
    //         max = arr2[i];
    //     }
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;
    
    // std::cout << "The max value in the array is: " << max;
    // for(int i = 0; i < s; i++){
    //     for(int j = 0; j < s;j++){
    //         if (j == i){
    //             std::cout << "$";
    //         } else if((i + j) == (s -1)){
    //             std::cout << "#";
    //         } else std::cout << " ";
    //     }
    //     std::cout << std::endl;
    // }

    // for(int i = 1; i < argc; i++)
    // {
    //     for(int j = 0; argv[i][j] != '\0'; j++)
    //     {
    //         std::cout << argv[i][j];
    //     }

    //     std::cout << std::endl;
           
    // }

// ################################### TEST FOR HACKERRANK #####################################
    // // Method 1: String literal (stored in read-only memory)
    // const char* str1 = "Hello World!"; // MUST be const
    
    // // Method 2: Character array (stored on stack, modifiable)
    // char str2[] = "Hello World!"; // Copies the string to modifiable memory
    
    // // Method 3: Explicit array (modifiable)
    // char str3[20] = "Hello World!";
    
    // // Now let's use pointers:
    // const char* ptr1 = str1; // Points to read-only memory
    // char* ptr2 = str2;       // Points to modifiable memory
    // char* ptr3 = str3;       // Points to modifiable memory
    
    // // This works - reading from read-only memory:
    // while(*ptr1 != '\0'){
    //     std::cout << *ptr1 << " ";
    //     ptr1++;
    // }
    
    // std::cout << std::endl;
    
    // // This also works - reading from modifiable memory:
    // while(*ptr2 != '\0'){
    //     std::cout << *ptr2 << " ";
    //     ptr2++;
    // }

    // char str[] = {'H', 'e', 'l', 'l','o'}; //bracket initialization doesn't need to terminate with null explicitly
    // char* ptr = &str[0]; // Get address of first character
    // while(*ptr != '\0') {
    //     if(*ptr == 'l'){
    //         *ptr = '&'; 
    //     }

    //     cout << *ptr << " ";
    //     ptr++; // Only increment once per loop
    // }
    // cout << endl;
    // cout << "Final string: ";
    // for(char c : str){
    //     cout << c;
    // }

    // map<string,int> my_map1;
    // my_map1["data1"]=1;
    // my_map1["data3"]=5;
    // my_map1["data2"]=1;
    // my_map1["data1"]=7; //rewrites first assignment, all keys unique

    //  map<string,int>::iterator itr;
    
    // for (itr = my_map1.begin(); itr != my_map1.end(); itr++)
    //     cout<<itr->first<<" "<<itr->second<<"; ";
    // cout<<"printed with iterators"<<endl;

    // for(auto x : my_map1)
    //     cout<<x.first<<" "<<x.second<<";";
    // cout<<endl;

    // auto search1 = my_map1.find("data1");
    
    // if(search1 != my_map1.end())
    //     cout << "Found " << search1->first << " " << search1->second << endl;
    // else
    //     cout<<"Not found"<<endl;

    // auto search2 = my_map1.find("data7");
    // if(search2 != my_map1.end())
    //     cout << "Found " << search2->first << " " << search2->second << endl;
    // else
    //     cout<<"Not found"<<endl; 

    // my_map1.erase(search1);

    // for(auto x : my_map1)
    //     cout<<x.first<<" "<<x.second<<";";
    // cout<<endl;   

    /* Enter your code here. Read input from STDIN. Print output to STDOUT 
    return 0;*/
    int friend_count = 0;
    cin >> friend_count;
    cin.ignore();
    int temp = friend_count;
    
    map<string,string> friends;  // Use string for phone numbers to avoid overflow
    
    while(friend_count > 0){  // Fixed: comparison instead of assignment
        string line;
        getline(cin, line);
        
        size_t space = line.find(' ');
        
        string name = line.substr(0,space);
        string number = line.substr(space + 1);  // Fixed: removed incorrect length
        friends[name] = number; 
        friend_count--;  // Fixed: decrement the counter
    }   
    
    string search;
    
    while(getline(cin, search)){
        auto search1 = friends.find(search);
        
        if(search1 != friends.end()){
            cout << search1->first << "=" << search1->second << endl;  // Fixed: correct format
        } else {
            cout << "Not found" << endl;
        }
    }



    map<string, string>::iterator itr;
    for(itr = friends.begin(); itr != friends.end(); itr++){
        cout << "name: " << itr -> first << " number: " << itr -> second << endl;
    } cout << endl << "Printer with iterator" << endl;  
    return 0;
}