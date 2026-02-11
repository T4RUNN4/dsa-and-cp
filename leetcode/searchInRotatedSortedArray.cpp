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

// Question:
//There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums. You must write an algorithm with O(log n) runtime complexity.


// Logic:
// Rotated sorted array means a part of the rotated array is sliced and reattached at the front of the array. If that happened, that means currently one part of the array is sorted. At first its calculate mid and check if its the value. If not, then its need to checked what part is sorted using this: target >= nums[st] && target < nums[mid]. Then check if the target is in the range of sorted part. 
// Then update start and mid accordingly.