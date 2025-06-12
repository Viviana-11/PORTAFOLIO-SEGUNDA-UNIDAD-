//4.1.2 Merge Sort 
#include <bits/stdc++.h>
using namespace std;

void merge(int array[], int a, int k, int b) {
    vector<int> temp;
    int i = a, j = k + 1;

    while (i <= k && j <= b)
        temp.push_back(array[i] <= array[j] ? array[i++] : array[j++]);

    while (i <= k) temp.push_back(array[i++]);
    while (j <= b) temp.push_back(array[j++]);

    for (int t = 0; t < temp.size(); t++)
        array[a + t] = temp[t];
}

void mergeSort(int array[], int a, int b) {
    if (a >= b) return;

    int k = (a + b) / 2;

    mergeSort(array, a, k);     
    mergeSort(array, k + 1, b); 
    merge(array, a, k, b);      
}

int main() {
    int array[] = {5, 1, 4, 2, 8};
    int n = sizeof(array) / sizeof(array[0]);

    mergeSort(array, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;

    return 0;
}

