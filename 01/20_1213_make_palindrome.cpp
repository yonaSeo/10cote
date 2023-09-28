#include <bits/stdc++.h>
using namespace std;
int cnt[128], flag;
string word, ret;
char mid;

int main(void) {
    cin >> word;
    for (char e : word) cnt[(int)e]++;
    for (int i = 'Z'; i >= 'A'; i--) {
        if (cnt[i]) {
            if (cnt[i] & 1) {
                mid = (char)i;
                flag++;
                cnt[i]--; // 짝수로 만들어야 아래서 한 번 더 더하지 않음
            }
            if (flag == 2) break;
            for (int j = 0; j < cnt[i]; j += 2) { // 앞뒤로 2개씩 더하기 때문에 2씩 증가
                ret = char(i) + ret;
                ret += char(i);
            }
        }
    }
    if (mid) ret.insert(ret.begin() + ret.size() / 2, mid);
    if (flag == 2) cout << "I'm Sorry Hansoo\n";
    else cout << ret << '\n';
    return 0;
}
