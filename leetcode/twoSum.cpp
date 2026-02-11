#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 13};
    int target = 18;

    int n = nums.size();
    int i = 0; int j = n-1;

    while(i<j) {
        int pairSum = nums[i] + nums[j];
        if(pairSum > target) {
            j--;
        } else if(pairSum < target) {
            i++;
        } else {
            break;
        }
    }

    cout << i << " " << j << "\n";
}

// Qus:
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

// Ans:
// Since its an sorted array, add the 0th and n-1th element. If the sum is smalled than the target, increase the left pointer or 0th pointer. Or else decrease the right one