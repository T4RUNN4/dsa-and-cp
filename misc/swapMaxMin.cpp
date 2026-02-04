#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    
    int max = INT_MIN;
    int min = INT_MAX;
    int min_i; int max_i;

    for(int i=0; i<size; i++) {
        if(arr[i] > max) {
            max = arr[i];
            max_i = i;
        }
        if(arr[i] < min) {
            min = arr[i];
            min_i = i;
        }
    }

    swap(arr[min_i], arr[max_i]);

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}