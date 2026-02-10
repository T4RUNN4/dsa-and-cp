#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 2, 1, 1};
    int n = nums.size();

    int freq = 0; int ans = 0;
    
    for(int i=0; i<n; i++) {
        
        if(freq == 0) {
            ans = nums[i];
        }
        
        if(nums[i] == ans) {
            freq++;
        } else {
            freq--;
        }
    }

    cout << ans << "\n";

    // v2 - sorting approach
    // sort(nums.begin(), nums.end());
    // int freq=1, ans=nums[0];

    // for(int i=1; i<n; i++) {
    //     if(nums[i] == nums[i-1]) {
    //         freq++;
    //     } else {
    //         freq = 1;
    //         ans = nums[i];
    //     }

    //     if(freq > (n/2)) {
    //         cout << ans << "\n";
    //     };
    // }

    // v1 - bruteforce approach
    // for(int i=0; i<n; i++) {
    //     int freq = 0;
    //     for(int j=0; j<n; j++) {
    //         if(nums[i] == nums[j]) {
    //             freq++;
    //         }
    //     }

    //     if(freq > (n/2)) {
    //         cout << nums[i] << "\n";
    //         break;
    //     }
    // }
}