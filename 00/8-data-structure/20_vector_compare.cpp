#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

bool compare(Point a, Point b) {
    return a.y > b.y;
}

int main(void) {
    vector<Point> v;

    for (int i = 10; i >= 1; i--) v.push_back({i, 11 - i});
    sort(v.begin(), v.end(), compare);
    for (auto e : v) cout << e.x << ", " << e.y << '\n';
    cout << '\n';

    return 0;
}
