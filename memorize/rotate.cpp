#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v = {1, 2, 3, 4, 5, 6};

    // 가운데: 시작 부분에서 떨어진 거리(만큼 회전)
    rotate(v.begin() + 1, v.begin() + 3, v.end() - 1);
    for (int e : v) cout << e << ' ';
    cout << '\n';

    return 0;
}
