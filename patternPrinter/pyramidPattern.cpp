#include <iostream>
using namespace std;

int main() {
	int n = 4;
    int c = 1;

    for(int i=0; i<4; i++) {
        //Left Half
        for(int j=0; j<(n-c); j++) {
            cout << "  ";
        }
        for(int j=1; j<c; j++) {
            cout << j << " ";
        }

        //Right Half
        for(int j=c; j>0; j--) {
            cout << j << " ";
        }
        c++;
        cout << "\n";
    }
}

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1