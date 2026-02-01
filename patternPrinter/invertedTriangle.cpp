#include <iostream>
using namespace std;

int main() {
	int n = 4;
    int sp = 0;

    for(int i=1; i<=n; i++) {
        for(int j=0; j<sp; j++) {
            cout << "  ";
        }
        for(int k=0; k<(n-sp); k++) {
            cout << i << " ";
        }
        cout << "\n";
        sp++;
    }
    return 0;
}

// 1 1 1 1 
//   2 2 2
//     3 3
//       4