#include <bits/stdc++.h>
using namespace std;

struct point {
    int x, y;
    bool operator<(const point &p) const {
        return x < p.x || (x == p.x && y < p.y);
    }
};

int main() {
    vector<point> v = {{3, 4}, {1, 2}, {3, 2}, {1, 5}};
    sort(v.begin(), v.end());

    for (auto p : v) {
        cout << "(" << p.x << ", " << p.y << ") ";
    }

    return 0;
}

