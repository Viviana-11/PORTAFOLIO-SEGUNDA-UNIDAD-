#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> permutation;
vector<bool> chosen;

void search() {
    if (permutation.size() == n) {
        for (int i = 0; i < permutation.size(); i++) {
            cout << permutation[i] << " ";
        }
        cout << "\n";
    } else {
        for (int i = 1; i <= n; i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main() {
    cout << "Ingresa el valor de n: ";
    cin >> n;
    chosen.assign(n + 1, false);
    search();
    return 0;
}

