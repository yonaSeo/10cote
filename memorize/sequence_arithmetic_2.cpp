#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n = 5; // 항 수
    int a = 3, l = 23, d = 5; // 첫 항, 마지막 항, 공차
    cout << n * (a + l) / 2 << '\n';
    cout << n * ((2 * a) + (n - 1) * d) / 2 << '\n'; // l = n번째 항 값 = a + (n - 1) d
    return 0;
}
