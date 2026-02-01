#include <iostream>
using namespace std;

bool primeChecker(int n) {
    if(n==0 || n==1) {
        return false;
    }
    for(int i=2; i*i<n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(primeChecker(n)) {
        cout << n << " is a prime number" << "\n";
    } else {
        cout << n << " is a not prime number" << "\n";
    }
    return 0;
}