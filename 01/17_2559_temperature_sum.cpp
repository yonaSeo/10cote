#include <bits/stdc++.h>
using namespace std;
int psum[100004], n, k, mx = -10000004, temp;

int main(void) {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        psum[i] = psum[i - 1] + temp;
    }
    for (int i = k; i <= n; i++) {
        mx = max(mx, psum[i] - psum[i - k]);
    }
    cout << mx << '\n';
    return 0;
}
