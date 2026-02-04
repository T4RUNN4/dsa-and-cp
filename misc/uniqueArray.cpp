#include <iostream>
using namespace std;

int main() {
    int size = 8;
    int arr[size] = {5, 1, 2, 3, 4, 1, 2, 3};

    for(int i=0; i<size; i++) {
        bool isUnique = true;
        for(int j=0; j<size; j++) {
            if(j!=i && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if(isUnique == true) {
            cout << arr[i] << " ";
        }
    }
}