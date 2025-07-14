// C++ Program to demonstrate 
// a multiprocessing environment.
#include <iostream>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n = s.length(); //get the length of the string 
    int maxLength = 0; // integer that records tha max length of different characters 
    unordered_set<char> charSet; //
    int left = 0;
    
    for (int right = 0; right < n; right++) {
        cout << "\nStep " << right << ":\n";
        if (charSet.count(s[right]) == 0) {
            charSet.insert(s[right]);
            cout << "Inserted: '" << s[right] << "'\n";
            cout << "Current charSet: { ";
            for (char c : charSet) cout << c << ' ';
            cout << "}\n";
            maxLength = max(maxLength, right - left + 1);
        } else {
            while (charSet.count(s[right])) {
                cout << "Erased: '" << s[left] << "'\n";
                charSet.erase(s[left]);
                left++;
                cout << "Current charSet: { ";
                for (char c : charSet) cout << c << ' ';
                cout << "}\n";
            }
            charSet.insert(s[right]);
            cout << "Inserted: '" << s[right] << "'\n";
            cout << "Current charSet: { ";
            for (char c : charSet) cout << c << ' ';
            cout << "}\n";
        }
        cout << "Window: [" << left << ", " << right << "]\n";
    }
    
    return maxLength;
}

int main()
{
    std::string s = "lksndfasdf";
    std::cout << lengthOfLongestSubstring(s);; 
}