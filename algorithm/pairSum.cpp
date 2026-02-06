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