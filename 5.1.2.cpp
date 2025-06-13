#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = { 5, 2, 3, 1, 2, 5, 7, 1 };

    sort(v.begin(), v.end());

    reverse(v.begin(), v.end());

    random_shuffle(v.begin(), v.end());

    cout << *v.begin() << "\n";

    sort(v.begin(), v.end());

    auto a = lower_bound(v.begin(), v.end(), 5);

    auto b = upper_bound(v.begin(), v.end(), 5);

    cout << *a << " " << *b << "\n"; 
    v.erase(unique(v.begin(), v.end()), v.end());

    for (auto x : v) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}

