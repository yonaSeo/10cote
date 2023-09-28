#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v = {2, 3, 4, 5, 7};

    cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << '\n'; // 가장 가까운 큰 값의 위치 반환
    cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << '\n';

    cout << lower_bound(v.begin(), v.end(), 9) - v.begin() << '\n';
    cout << upper_bound(v.begin(), v.end(), 9) - v.begin() << '\n';

    cout << lower_bound(v.begin(), v.end(), 0) - v.begin() << '\n';
    cout << upper_bound(v.begin(), v.end(), 0) - v.begin() << '\n';

    return 0;
}
