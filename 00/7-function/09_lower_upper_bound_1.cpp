#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    vector<int> v {1, 2, 3, 3, 3, 4};
    cout << lower_bound(v.begin(), v.end(), 3) - v.begin() << '\n';
    cout << upper_bound(v.begin(), v.end(), 3) - v.begin() << '\n';
    return 0;
}
