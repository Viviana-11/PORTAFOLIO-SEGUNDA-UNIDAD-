#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> permutation;
    for (int i = 1; i <= n; i++) {
        permutation.push_back(i);
    }
    do {
        for (int i = 0; i < permutation.size(); i++) {
            cout << permutation[i] << " ";
        }
        cout << "\n";
    } while (next_permutation(permutation.begin(), permutation.end()));
    return 0;
}

