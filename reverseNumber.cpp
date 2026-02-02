#include <iostream>
using namespace std;

int main() {
    int n, rev_n = 0;;
    cout << "Enter the number: ";
    cin >> n;

    while(n>0) {
        int ld = n%10;
        n /= 10;

        rev_n = ((rev_n*10) + ld);
    }

    cout << "Reversed version is: " << rev_n << "\n";
}