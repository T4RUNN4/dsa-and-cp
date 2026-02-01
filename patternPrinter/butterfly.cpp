#include <iostream>
using namespace std;

int main() {
    int n=4;
    int sp=0;
    int ep=((2*n)-1);
    bool isRev = false;

    for(int i=0; i<2*n; i++) {
        for(int j=0; j<2*n; j++) {
            if(j<=sp || j>=ep) {
                cout << "*" << " ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
        if(isRev) {
            sp--;
            ep++;
        } else {
            sp++;
            ep--;
        }

        if(i==n) {
            isRev = true;
            sp-=3;
            ep+=3;
        }
    }

    return 0;
}

// *             * 
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * * 
// * *         * *
// *             *