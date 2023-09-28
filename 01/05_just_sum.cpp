#include <bits/stdc++.h>
using namespace std;
int a[100004], from, to, psum[100004], n, m;

int main(void) {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> from >> to;
        int sum = 0;
        for (int j = from; j <= to; j++) sum += a[j];
        cout << sum << '\n';
    }
    return 0;
}
