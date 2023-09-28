#include <bits/stdc++.h>
using namespace std;
int a[9];

// permutation 쓰는 이유: 구현 간단
// (시간 복잡도 18만 (= 9! / (9 - 7)! = 181440) -> 1000만 이하 시도 가능)
int main(void) {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for (int i = 0; i < 9; i++) cin >> a[i];
    sort(a, a + 9);
    do {
        // for (int i : a) cout << i << ' ';
        // cout << '\n';
        int sum = 0;
        for (int i = 0; i < 7; i++) sum += a[i]; // 7개 슬라이스
        if (sum == 100) break;
    } while(next_permutation(a, a + 9));
    for (int i = 0; i < 7; i++) cout << a[i] << '\n'; // 7개 슬라이스
    return 0;
}

// 20
// 7
// 23
// 19
// 10
// 15
// 25
// 8
// 13
