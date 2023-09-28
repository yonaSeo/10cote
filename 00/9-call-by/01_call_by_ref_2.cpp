#include <bits/stdc++.h>
using namespace std;

vector<int> v(3, 0);

void go(vector<int> &v) {
    v[1] = 100;
}

int main(void) {
    go(v);
    for (int e : v) cout << e << ' ';
    cout << '\n';
    return 0;
}
