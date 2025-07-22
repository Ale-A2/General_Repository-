// C++ Program to demonstrate 
// a multiprocessing environment.
#include <iostream>
#include <unordered_set>
using namespace std;
#include <string>

// int lengthOfLongestSubstring(string s) {
//     int n = s.length(); //get the length of the string 
//     int maxLength = 0; // integer that records tha max length of different characters 
//     unordered_set<char> charSet; //
//     int left = 0;
    
//     for (int right = 0; right < n; right++) {
//         cout << "\nStep " << right << ":\n";
//         if (charSet.count(s[right]) == 0) {
//             charSet.insert(s[right]);
//             cout << "Inserted: '" << s[right] << "'\n";
//             cout << "Current charSet: { ";
//             for (char c : charSet) cout << c << ' ';
//             cout << "}\n";
//             maxLength = max(maxLength, right - left + 1);
//         } else {
//             while (charSet.count(s[right])) {
//                 cout << "Erased: '" << s[left] << "'\n";
//                 charSet.erase(s[left]);
//                 left++;
//                 cout << "Current charSet: { ";
//                 for (char c : charSet) cout << c << ' ';
//                 cout << "}\n";
//             }
//             charSet.insert(s[right]);
//             cout << "Inserted: '" << s[right] << "'\n";
//             cout << "Current charSet: { ";
//             for (char c : charSet) cout << c << ' ';
//             cout << "}\n";
//         }
//         cout << "Window: [" << left << ", " << right << "]\n";
//     }
    
//     return maxLength;
// }



int main()
{
    std::string str = "Example String";
    // std::cout << lengthOfLongestSubstring(s);; 
    // char str[] = "Example string"; 

    std::string s1; // empty string constuctor
    std::string s2(str); //copy constructor of string
    std::string s3(str, 7, 7); // copy constructor of substring
    std::string s4("Sequence of chars"); //using a char* sequence to initialize a string
    std::string s5("Another sequence of chars", 5); //same but specify the size of the substring
    std::string s6(10, 'W'); //fill in constructor, repeat the char N times
    std::string s7(10, 50); // the same but ascii
    std::string s8 (str.begin(), str.begin() + 8); //range base copy constructor;
    
     std::cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3;
    std::cout << "\ns4: " << s4 << "\ns5: " << s5 << "\ns6a: " << s6;
    std::cout << "\ns6b: " << s7<< "\nsn7:" << s8;


    //XXXXXXXXXXXXXXXXXXXXXXX FUNCTIONS 
    
    return 0;
;}