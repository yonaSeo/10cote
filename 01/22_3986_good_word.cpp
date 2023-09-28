#include <bits/stdc++.h>
using namespace std;
int n, cnt;
string word;

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        stack<char> stk;
        cin >> word;
        for (char e : word) {
            if (stk.size() && stk.top() == e) stk.pop(); // stack, queue top() 시, 꼭 사이즈 체크
            else stk.push(e);
        }
        if (!stk.size()) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
