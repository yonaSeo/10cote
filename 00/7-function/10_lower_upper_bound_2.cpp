#include <bits/stdc++.h>
using namespace std;

vector<int> v{1, 2, 3, 3, 3, 4, 100, 999};

int main(void) {
    cout << *lower_bound(v.begin(), v.end(), 100) << '\n';
    cout << *upper_bound(v.begin(), v.end(), 100) << '\n';
    cout << upper_bound(v.begin(), v.end(), 3) - lower_bound(v.begin(), v.end(), 3) << '\n'; // 개수
    return 0;
}
