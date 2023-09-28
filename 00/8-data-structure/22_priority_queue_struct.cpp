#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
    Point() { x = -1; y = -1; }
    bool operator < (const Point &a) const {
        if (x == a.x) return y > a.y; // pq 커스텀정렬은 반대로 넣어야 한다
        return x > a.x; // same here
    }
};

struct Point2 {
    int x, y;
};

struct cmp {
    bool operator() (Point2 a, Point2 b) {
        return a.x < b.x;
    }
};

int main(void) {
    priority_queue<Point> pq;
    // priority_queue<Point2, vector<Point2>, cmp> pq;
    pq.push({1, 1});
    pq.push({2, 9});
    pq.push({2, 2});
    pq.push({3, 3});
    pq.push({4, 4});
    while (pq.size()) {
        cout << pq.top().x << ", " << pq.top().y << '\n';
        pq.pop();
    }
    return 0;
}
