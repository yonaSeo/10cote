#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c;

ll go(ll a, ll b) {
    if (b == 1) return a % c;
    ll ret = go(a, b / 2); // 승수/2 씩 해서 O(logN)으로 만듦
    ret = (ret * ret) % c; // ret 끼리 곱해서 연산수 줄이고, ll 넘어가므로 % 연산 미리 하기
    if (b % 2) ret = (ret * a) % c; // 홀수 승수이면 누락 된 ^1 곱하기
    return ret; // (a^1 * a^1), (a^2 * a^2), (a^4 * a^4), ..., (a^(b/2) * a^(b/2)) 순으로 8번 라인으로 되돌아감
}

int main(void) {
    cin >> a >> b >> c;
    cout << go(a, b) << '\n';
    return 0;
}
