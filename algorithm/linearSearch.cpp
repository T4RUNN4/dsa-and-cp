#include <iostream>
using namespace std;

int linearSearch(int arr[], int target, int size) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int size = 6;
    int arr[size] = {4, 8, 6, 3, 2};

    int result = linearSearch(arr, 8, size);
    (result >= 0) ? cout << "The number is at: " << result << "\n" : cout << "The number is not in array";
}