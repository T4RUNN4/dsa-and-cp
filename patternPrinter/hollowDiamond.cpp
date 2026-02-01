#include <iostream>
using namespace std;

int main() {
    int n=4;
    int sp=3;
    int ep=3;
    bool rev=false;

    for(int i=0; i<((2*n) -1); i++) {
        for(int j=0; j<((2*n) -1); j++) {
            if(j==sp || j==ep) {
                cout << "*" << " ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";

        if(rev) {
            sp++;
            ep--;
        } else {
            sp--;
            ep++;
        }

        if(i==3) {
            rev = true;
            sp=1;
            ep=5;
        }
    }
}


//       *
//     *   *
//   *       *
// *           *
//   *       *
//     *   *
//       *