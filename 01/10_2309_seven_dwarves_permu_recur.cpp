#include <bits/stdc++.h>
using namespace std;
int a[9], n = 9, r = 7;

void solve(void) {
    int sum = 0;
    for (int i = 0; i < r; i++) sum += a[i];
    if (sum == 100) {
        sort(a, a + r);
        for (int i = 0; i < r; i++) cout << a[i] << '\n';
        exit(0);
    }
}

void permutation(int n, int r, int depth) {
    if (r == depth) {
        solve();
        return;
    }
    for (int i = depth; i < n; i++) {
        swap(a[i], a[depth]);
        permutation(n, r, depth + 1);
        swap(a[i], a[depth]);
    }
}

int main(void) {
    for (int i = 0; i < 9; i++) cin >> a[i];
    permutation(n, r, 0);
    return 0;
}
