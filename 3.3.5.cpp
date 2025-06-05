#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[5][5]; 

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> x[i][j];
        }
    }

    int s = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            s += x[i][j];
        }
    }

    cout << s << "\n";
    return 0;
}

