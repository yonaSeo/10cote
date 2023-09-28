#include <bits/stdc++.h>
using namespace std;

int N, cnt;
void solve(int N) {
    cnt++;
    cout << cnt << '\n';
    if (N == 0) return;
    for (int i = 0; i < 3; i++) {
        solve(N - 1);
    }
}

int main(void) {
    cin >> N;
    solve(N);
    return 0;
}

// 재귀함수 호출 횟수는 i^N (2번 호출: 2^N, 10번 호출 10^N) -> 등비수열의 합 때문
// (일반적인 go(idx - 1), go(idx + 1) 등의 구조일 경우)
// 등비수열의 합: a(r^n - 1)/(r - 1)
// -> 1 * (3^(N + 1) - 1) / (3 - 1) = 1/2 * (3^(N + 1) - 1) = O(3^N)
// (N + 1인 이유는 N이 0인 경우도 카운트하기 때문 -> 어쨌든 3^N번 이다)
// 재귀함수 시간복잡도: main logic * call count -> O(1) * O(3^N)
