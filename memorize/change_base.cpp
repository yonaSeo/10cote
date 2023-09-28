#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v;
    int n = 8;
    int b = 2;
    while (n > 1) {
        v.push_back(n % b);
        n /= b;
    }
    if (n <= 1) v.push_back(n);
    reverse(v.begin(), v.end());
    for (int e : v) {
        if (e >= 10) cout << char(e + 55);
        else cout << e;
    }
    cout << '\n';
    return 0;
}
