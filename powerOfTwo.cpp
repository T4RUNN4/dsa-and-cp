#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    ((n&(n-1))==0) ? cout << n << " is power of 2" : cout << n << " is not power of 2";
}