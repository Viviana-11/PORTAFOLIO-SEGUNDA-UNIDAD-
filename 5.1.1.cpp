#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[5]; 
    vector<int> v;
    v.push_back(3); 
    v.push_back(2); 
    v.push_back(5); 
    cout << "Elementos insertados manualmente con push_back:\n";
    cout << v[0] << "\n"; 
    cout << v[1] << "\n"; 
    cout << v[2] << "\n"; 
    vector<int> w = {2, 4, 2, 5, 1};

    cout << "\nRecorriendo vector w con bucle for:\n";
    for (int i = 0; i < w.size(); i++) {
        cout << w[i] << "\n";
    }
    vector<int> a(8);
    cout << "\nVector a (8 ceros):\n";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    vector<int> b(8, 2);
    cout << "\nVector b (8 doses):\n";
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << "\n";

    return 0;
}

