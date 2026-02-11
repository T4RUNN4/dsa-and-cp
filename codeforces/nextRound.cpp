#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> score;
    int passed = 0;
    for(int i=0; i<n; i++) {
        int c; cin >> c;
        score.push_back(c);
    }

    for(int i=0; i<n; i++) {
        if(score[i] > 0 && score[i] >= score[k-1]) {
            passed++;
        }
    }

    cout << passed << "\n";
}