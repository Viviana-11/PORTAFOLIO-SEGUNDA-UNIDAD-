#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;

    s.insert(3);
    s.insert(2);
    s.insert(5);

    cout << s.count(3) << "\n"; 
    cout << s.count(4) << "\n"; 

    s.erase(3);
    s.insert(4);

    cout << s.count(3) << "\n";
    cout << s.count(4) << "\n";
    cout << "Tamaño del set: " << s.size() << "\n";

    for (auto x : s) {
        cout << x << "\n";
    }
    int x = 5;
    auto it = s.find(x);
    if (it == s.end()) {
        cout << x << " no se encontró en el set\n";
    } else {
        cout << x << " sí se encontró en el set\n";
    }

    return 0;
}

