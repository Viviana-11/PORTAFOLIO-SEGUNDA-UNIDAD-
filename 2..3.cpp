#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 2147483647;
    cout << x << endl; // 2147483647
    x++;
    cout << x << endl; // -2147483648 (overflow)
	return 0;
}
