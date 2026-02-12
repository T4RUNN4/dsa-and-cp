#include <iostream>
#include <vector>
 
using namespace std;

int peak(vector<int> arr) {
    int st = 1;
    int e = arr.size() - 2;

    while(st <= e) {
        int mid = st + ((e - st)/2);

        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid+1]) {
            return mid;
        } else if(arr[mid] > arr[mid - 1]) {
            st = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {0, 3, 8, 9, 5, 2};
    cout << peak(arr) << "\n";
    return 0;
}


// Qus
// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease. Return the index of the peak element. Your task is to solve it in O(log(n)) time complexity.

// Logic
// Since its an sorted array, binary search is used here. Mountain array is a type of array which has a minimum size of 3. It has one element that is greater than all the other element. On the left side of the array, the values are in increasing order and on the right it's in decresing. So, peak index will be the value: arr[i - 1] < arr[i] > arr[i + 1]. Everytime, if mid doesn't match this condtion its need to check if the mid is in the right or left slope. If mid is on the right slope, peak is on the left and vice versa. Based on the mid, increase or decrease the start and end.