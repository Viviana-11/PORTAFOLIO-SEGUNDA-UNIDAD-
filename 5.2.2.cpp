#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;

    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;
    cout << m["banana"] << "\n"; // 3
    cout << m["aybabtu"] << "\n"; // 0
    if (m.count("aybabtu")) {
        cout << "\"aybabtu\" existe en el mapa\n";
    } else {
        cout << "\"aybabtu\" no existe en el mapa\n";
    }

    cout << "Contenido del map:\n";
    for (auto x : m) {
        cout << x.first << " => " << x.second << "\n";
    }

    return 0;
}

