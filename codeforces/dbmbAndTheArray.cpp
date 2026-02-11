#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, s, x;
    cin >> n >> s >> x;

    int sum = 0;

    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        sum += num;
    }

    if((s >= sum) && ((s-sum)%x == 0)) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
};

int main() {
    int t;
    cin >> t;

    for(int i=0; i<t; i++) {
        solve();
    }
    
    return 0;
}

// Ques
// DBMB had a birthday yesterday. He was gifted an array a of n elements and a number x. But there is one problem: he only likes arrays where the sum of the elements equals s. To make the array appealing to him, you can perform the following operation any number of times:

// Choose an index i(1≤i≤n) and add x to the number a[i]. For example, if he was given the array [1,2,3,5] and x=2, you can choose index 3 and get the array [1,2,5,5]. Your task is to determine whether the array can appeal to DBMB after any number of operations.

// Logic
// After adding all the digits of array, if the sum of array is less than s and (s-sum) is divisible by x; only tha its possible or else not.