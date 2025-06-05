#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 3;
    int b = 4;
    int c;
    int n = 5; 

    for (int i = 1; i <= n; i++) {
        a++;     
        b++;       
        c = a + b; 
        cout << "Iteracion " << i << ": a = " << a << ", b = " << b << ", c = " << c << endl;
    }

    return 0;
}

