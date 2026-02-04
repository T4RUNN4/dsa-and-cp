#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> vect) {
    for(int i=(vect.size()-1); i>=0; i--) {
        cout << vect[i] << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> vect = {1, 2, 3, 4, 5, 6};
    cout << "Reversed array: ";
    reverse(vect);
}