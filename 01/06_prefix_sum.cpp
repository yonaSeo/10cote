#include <bits/stdc++.h>
using namespace std;
int a[100004], from, to, psum[100004], n, m;

int main(void) {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) { // i - 1 때문에 1부터 시작
        cin >> a[i];
        // 이전 누적합에 새로운 값 더해서 새로운 누적합 만들기
        psum[i] = psum[i - 1] + a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> from >> to;
        // 구간 시작 바로 전의 누적합 빼면 구간합 구하기 쌉가능
        cout << psum[to] - psum[from - 1] << '\n';
    }
}
