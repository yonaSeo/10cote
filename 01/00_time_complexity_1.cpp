#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            sum += i + j;
            cnt++;
        }
    }
    cout << sum << '\n';
    cout << cnt << '\n';

    return 0;
}

// 1/2(N^2 - N) = O(N^2)
