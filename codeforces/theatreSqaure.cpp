#include <iostream>

using namespace std;

int main() {
    long long int n, m, a, h, w;
    cin >> n >> m >> a;

    (n%a == 0) ? h = n/a : h = (n/a)+1;
    (m%a == 0) ? w = m/a : w = (m/a)+1;

    cout << h*w << "\n";
    return 0;
}