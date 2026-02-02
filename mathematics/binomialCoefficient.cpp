#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for(int i=2; i<=n; i++) {
        result*=i;
    }
    return result;
}

int binomial_coefficient(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    int result = fact_n/(fact_r*fact_nmr);
}

int main() {
    int n;
    int r;
    cout << "Enter the n: ";
    cin >> n;
    cout << "Enter the r: ";
    cin >> r;

    if(n<r) {
        cout << "The value of n must be greater than or equal to r" << "\n";
        return 1;
    }

    cout << "Binomial Coefficient of " << n << " and " << r << " is: " << binomial_coefficient(n, r);
    return 0;
}