#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll M = 1000000007;

int main() {
    int n;
    cin >> n;

    ll f = 1;
    for (int i = 1; i <= n; i++) {
        f = (f * i) % M;
    }

    cout << f << "\n";

    return 0;
}

