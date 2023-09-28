#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // vector<int> v = {1, 2, 3};
    // vector<int> ret(3);
    int a[3] = {1, 2, 3};
    int ret[3];

    // copy(v.begin(), v.end(), ret.begin());
    copy(a, a + 3, ret);
    cout << ret[1] << '\n';

    ret[1] = 100;
    cout << ret[1] << '\n';
    cout << a[1] << '\n';

    return 0;
}
