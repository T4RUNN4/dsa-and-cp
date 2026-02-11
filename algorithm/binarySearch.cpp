#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> nums, int target) {
    int n = nums.size();
    int sp = 0; int ep = n-1;

    while(sp <= ep) {
        int mid = sp+((ep-sp)/2);

        if(target > nums[mid]) {
            sp  = mid+1;
        } else if(target < nums[mid]) {
            ep = mid-1;
        } else {
            return mid;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 0;

    int result = binarySearch(nums, target);
    if(result >= 0) {
        cout << result << "\n";
    } else {
        cout << "Element is not in the array" << "\n";
    }
}