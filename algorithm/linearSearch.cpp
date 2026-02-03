#include <iostream>
using namespace std;

int linearSearch(int arr[], int target, int size) {
    int index = -1;

    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            index = i;
            break;
        }
    }

    return index;
}

int main() {
    int size = 6;
    int arr[size] = {4, 7, 6, 3, 2};

    int result = linearSearch(arr, 8, size);
    (result >= 0) ? cout << "The number is at: " << result << "\n" : cout << "The number is not in array";
}