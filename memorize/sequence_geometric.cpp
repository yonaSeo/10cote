#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a = 1, d = 2, n = 4; // 초항, 공비, 항 수
    vector<int> v;
    cout << a * ((int)pow(d, n) - 1) / (d - 1); // a (d^2 - 1) / d - 1
    cout << '\n';
    for (int i = 0; i < n; i++) {
        v.push_back(a);
        a *= d;
    }
    for (int e : v) cout << e << ' ';
    cout << '\n';
    return 0;
}
