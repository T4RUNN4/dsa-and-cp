#include <iostream>
using namespace std;

void fibonacci(int n) {
    int f=0;
    int s=1;

    cout << f << " " << s << " ";
    for(int i=0; i<(n-2); i++) {
        int temp=f;
        f=s;
        s=temp+f;
        cout << s << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cout << "How long sequence needs to be printed? ";
    cin >> n;

    fibonacci(n);
}