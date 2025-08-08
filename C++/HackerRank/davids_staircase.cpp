#include <iostream>
#include <vector>
using namespace std;

// Function to find all possible ways to climb n stairs
// David can take 1, 2, or 3 steps at a time
void findWays(int n, vector<int>& path, vector<vector<int>>& allPaths) {
    // Base case: if we've reached exactly n steps, we found a valid path
    if (n == 0) {
        allPaths.push_back(path);
        return;
    }
    
    // If n becomes negative, this path is invalid
    if (n < 0) {
        return;
    }
    
    // Try taking 1 step
    path.push_back(1);
    findWays(n - 1, path, allPaths);
    path.pop_back(); // backtrack
    
    // Try taking 2 steps
    path.push_back(2);
    findWays(n - 2, path, allPaths);
    path.pop_back(); // backtrack
    
    // Try taking 3 steps
    path.push_back(3);
    findWays(n - 3, path, allPaths);
    path.pop_back(); // backtrack
}

// Function to print all possible ways
void printAllWays(int n) {
    vector<vector<int>> allPaths;
    vector<int> path;
    
    findWays(n, path, allPaths);
    
    cout << "All possible ways for David to climb " << n << " stairs:" << endl;
    cout << "Total ways: " << allPaths.size() << endl << endl;
    
    for (int i = 0; i < allPaths.size(); i++) {
        cout << "Way " << (i + 1) << ": ";
        for (int j = 0; j < allPaths[i].size(); j++) {
            cout << allPaths[i][j];
            if (j < allPaths[i].size() - 1) {
                cout << " + ";
            }
        }
        cout << " = " << n << endl;
    }
}

// Dynamic programming approach to count total ways (more efficient)
int countWays(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;
    
    vector<int> dp(n + 1);
    dp[0] = 1; // one way to climb 0 stairs (do nothing)
    dp[1] = 1; // one way to climb 1 stair
    dp[2] = 2; // two ways to climb 2 stairs (1+1 or 2)
    dp[3] = 4; // four ways to climb 3 stairs (1+1+1, 1+2, 2+1, 3)
    
    for (int i = 4; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    
    return dp[n];
}

int main() {
    int n;
    
    cout << "Enter the number of stairs: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Number of stairs must be positive!" << endl;
        return 1;
    }
    
    // Show all possible ways (for small values of n)
    if (n <= 10) {
        printAllWays(n);
    } else {
        cout << "For " << n << " stairs, there are too many combinations to display all." << endl;
        cout << "Total number of ways: " << countWays(n) << endl;
    }
    
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();
    
    return 0;
}
