
//4.1.1 Bubble Sort  
#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[] = {4, 1, 3, 9, 2};
    int n = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (array[j] > array[j + 1]) {              
                array[j] = array[j] ^ array[j + 1];
                array[j + 1] = array[j] ^ array[j + 1];
                array[j] = array[j] ^ array[j + 1];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

