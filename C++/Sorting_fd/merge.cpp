
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using std::vector;

void merge(vector<int>& arr, int left, 
                     int mid, int right){
                         
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp vectors
    vector<int> L(n1), R(n2);

    // Copy data to temp vectors L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    // Merge the temp vectors back 
    // into arr[left..right]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], 
    // if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], 
    // if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(vector<int>& arr, int left, int right){
    
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}


void displayArray(const vector<int>& arr) {
    std::cout << "[ ";
    for (size_t i = 0; i < arr.size(); i++) {
        if (i >= arr.size() - 1) {
            std::cout << arr[i] << " ]";
        } else std::cout << arr[i] << " , ";
    }
    std::cout << std::endl;
}


int main() {
    const int SIZE = 10;
    vector<int> arr(SIZE);

    // 2D array declaration (not used for merge sort)
    // const int ROWS = 3;
    // const int COLS = 3;
    // int arr2D[ROWS][COLS];

    // Seed random number generator
    srand(time(0));

    // Fill vector with random values (1-100)
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1;
    }

    displayArray(arr);
    mergeSort(arr, 0, arr.size() - 1);
    displayArray(arr);
    return 0;
}