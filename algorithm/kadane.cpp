#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, -3, 16, -7, 8};

    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int i=0; i<nums.size(); i++) {
        currentSum += nums[i];
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << maxSum << "\n";
}