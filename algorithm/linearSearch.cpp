#include <iostream>
#include <vector>
using namespace std;

// array approach
int linearSearch(int arr[], int target, int size) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }

    return -1;
}

// vector approach
int linearSearchVector(vector<int> vect, int target) {
    for(int i=0; i<vect.size(); i++) {
        if(vect[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    
    // array approach tester

    // int size = 6;
    // int arr[size] = {4, 8, 6, 3, 2};
    // int result = linearSearch(arr, 8, size);
    // (result >= 0) ? cout << "The number is at: " << result << "\n" : cout << "The number is not in array";


    //vector approach tester
    vector<int> vect = {4, 8, 6, 3, 2};
    int result = linearSearchVector(vect, 8);
    (result >= 0) ? cout << "The number is at: " << result << "\n" : cout << "The number is not in array";
}