#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int best = 0;
    for (int a = 0; a < n; a++) {
        int sum = 0; 
        for (int b = a; b < n; b++) {
            sum += array[b];
            best = max(best, sum);
        }
    }

    cout << best << "\n";

    return 0;
}

