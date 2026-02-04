#include <iostream>
using namespace std;

int sum(int arr[], int size) {
    int s = 0;

    for(int i=0; i<size; i++) {
        s += arr[i];
    }

    return s;
}

int product(int arr[], int size) {
    int p = 1;

    for(int i=0; i<size; i++) {
        p *= arr[i];
    }

    return p;
}

int main() {
    int size = 5;
    int arr[size] = {1,2,3,4,5};
    
    cout << "Sum of the given items: " << sum(arr, size) << "\n";
    cout << "Product of the given items: " << product(arr, size) << "\n";
}