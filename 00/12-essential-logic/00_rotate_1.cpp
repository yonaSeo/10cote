#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v = {1, 2, 3, 4, 5, 6};

    rotate(v.begin(), v.begin() + 1, v.end());
    for (int e : v) cout << e << ' ';
    cout << '\n';

    rotate(v.begin(), v.begin() + 2, v.end());
    for (int e : v) cout << e << ' ';
    cout << '\n';

    return 0;
}
