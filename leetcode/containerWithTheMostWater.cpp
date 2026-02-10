#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxWater(vector<int> height) {
    int maxW = INT_MIN;
    int n = height.size();
    int lp = 0; int rp = n-1;

    while(lp < rp) {
        int h = min(height[lp], height[rp]);
        int w = rp - lp;

        int curr = h * w;
        maxW = max(maxW, curr);

        height[lp] < height[rp] ? lp++ : rp--;
    }

    return maxW;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxWater(height) << "\n";
}


// Qus: 

// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water. Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

//Solution:

// For each container, the smallest one controlling the water height. So each time, with 2-pointer just increase the smallest one and calculate the water volume. Biggest one will eventually come out.