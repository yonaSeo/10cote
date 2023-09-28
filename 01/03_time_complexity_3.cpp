#include <bits/stdc++.h>
using namespace std;

int N, cnt;
void solve(int N) {
    int a = 0, i = N;
    while (i > 0) {
        a += i;
        i /= 2;
        cnt++;
    }
    cout << a << '\n';
    cout << "cnt: " << cnt << '\n';
}

int main(void) {
    cin >> N;
    solve(N);
    return 0;
}

// log_2(N) - 1 = O(logN)
