#include <iostream>
using namespace std;

int main() {
    int n=4;
    int sp=(n-1);
    int ep=(n-1);
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

        if(i==(n-1)) {
            rev = true;
            sp+=2;
            ep-=2;
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