#include <iostream>
using namespace std;

int main() {
    int a=6;
    int b=10;

    cout << "Bitwise AND: " << (a & b) << "\n"; // 2
    cout << "Bitwise OR: " << (a | b) << "\n"; // 14
    cout << "Bitwise XOR: " << (a ^ b) << "\n"; // 12

    cout << "Left Shift: " << (b << 2) << "\n"; // 40
    cout << "RIght Shift: " << (b >> 1) << "\n"; // 5
}