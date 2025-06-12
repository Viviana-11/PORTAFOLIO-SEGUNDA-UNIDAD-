#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 7;
    int array[] = {3, 5, 2, 4, 4, 1, 5}; 

    bool ok = true;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] == array[j]) {
                ok = false;
            }
        }
    }

    if (ok)
        cout << "Todos los elementos son diferentes.\n";
    else
        cout << "Hay elementos repetidos en el array.\n";

    return 0;
}

