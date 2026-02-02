#include <iostream>
using namespace std;

int decToBin(int n) {
    int ans = 0; int p=1;
    
    while(n > 0) {
        int r = n%2;
        n /= 2;
        ans += (r*p);
        p *= 10;
    }

    return ans;
}

int binToDec(int n) {
    int ans=0; int p=1;
    while(n > 0) {
        int d=n%10;
        n /= 10;

        ans += d*p;
        p *= 2;
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // cout << "Binary of " << n << " is " << decToBin(n) << "\n";
    cout << "Decimal of " << n << " is " << binToDec(n) << "\n";
    return 0;
}