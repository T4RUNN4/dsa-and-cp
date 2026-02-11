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

// Qus: Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a. What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

// Logic
// Since parallel number of stone is needed and stone can exceed the pave, first it need to be calculated the minimum number of stone needed in height and width. Then the total number of stone can be calculated