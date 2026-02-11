#include <iostream>
#include <vector>

using namespace std;

int rotatedSearch(vector<int> nums, int target) {
    int n = nums.size();
    int st = 0; int e = n - 1;

    while(st <= e) {
        int mid = st + ((e - st)/2);
        
        if(nums[mid] == target) {
            return mid;
        }

        if(nums[st] <= nums[mid]) {
            if(nums[st] <= target && target <= nums[mid]) {
                e = mid - 1;
            } else {
                st = mid + 1;
            }
        } else {
            if(nums[mid] <= target  && target <= nums[e]) {
                st = mid + 1;
            } else {
                e = mid - 1;
            }
        }
    }

    return -1;
    
}

int main() {
    vector<int> nums = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    cout << rotatedSearch(nums, target) << "\n";
}


// Logic:
// Rotated sorted array means a part of the rotated array is sliced and reattached at the front of the array. If that happened, that means currently one part of the array is sorted. At first its calculate mid and check if its the value. If not, then its need to checked what part is sorted using this: target >= nums[st] && target < nums[mid]. Then check if the target is in the range of sorted part. 
// Then update start and mid accordingly.