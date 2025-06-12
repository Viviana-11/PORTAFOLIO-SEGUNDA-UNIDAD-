#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 7; 
    int a[] = {4, 2, 5, 3, 5, 8, 3};

    sort(a, a + n); 

    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

