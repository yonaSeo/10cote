#include <bits/stdc++.h>
using namespace std;
int cnt, n, m, arr[15004];

int main(void) {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> arr[i];
    if (m > 200000) cout << 0 << '\n'; // 없어도 맞지만 시간초과 방지용
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (arr[i] + arr[j] == m) cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}
