//4.1.3 Sorting Lower Bound 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);
    v.push_back(3);
    v.push_back(5);
    v.push_back(8);
    v.push_back(3);

    sort(v.begin(), v.end());

    cout << "Vector ordenado: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

