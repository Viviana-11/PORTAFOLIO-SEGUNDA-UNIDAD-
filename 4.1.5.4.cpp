#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector< pair<int, int> > v;

    v.push_back(make_pair(1, 5));
    v.push_back(make_pair(2, 3));
    v.push_back(make_pair(1, 2));

    sort(v.begin(), v.end()); 

    cout << "Vector de pares ordenado:\n";
    for (int i = 0; i < v.size(); i++) {
        cout << "(" << v[i].first << ", " << v[i].second << ") ";
    }
    cout << endl;

    return 0;
}

