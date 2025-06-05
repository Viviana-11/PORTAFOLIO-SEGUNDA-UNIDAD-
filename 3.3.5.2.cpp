#include <iostream>
using namespace std;

typedef long long ll;
const ll M = 1000000007;

int main() {
    int n;
    cin >> n;

    ll f1 = 1;
    ll f2 = 1;
    for (int i = 1; i <= n; i += 2) {
        f1 = (f1 * i) % M;
        f2 = (f2 * (i + 1)) % M;
    }

    ll f = (f1 * f2) % M;
    cout << f << "\n";

    return 0;
}

