#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<tuple<int, int, int>> v;

    v.push_back(make_tuple(2, 1, 4));
    v.push_back(make_tuple(1, 5, 3));
    v.push_back(make_tuple(2, 1, 3));

    sort(v.begin(), v.end()); // Orden lexicográfico automático

    cout << "Vector de tuplas ordenado:\n";
    for (int i = 0; i < v.size(); i++) {
        cout << "("
             << get<0>(v[i]) << ", "
             << get<1>(v[i]) << ", "
             << get<2>(v[i]) << ") ";
    }
    cout << endl;

    return 0;
}

