#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v = {1, 2, 3, 4, 5, 6};

    rotate(v.rbegin(), v.rbegin() + 2, v.rend());
    for (int e : v) cout << e << ' ';
    cout << '\n';

    return 0;
}
