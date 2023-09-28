#include <bits/stdc++.h>
using namespace std;
int cnt[26], odd_cnt;
string word, ret, temp;
char odd_chr;

int main(void) {
    cin >> word;
    for (char e : word) cnt[(int)(e - 'A')]++;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2) {
            odd_chr = (char)(i + 'A');
            odd_cnt++;
            if (odd_cnt > 1) {
                cout << "I'm Sorry Hansoo\n";
                exit(0);
            }
        }
        if (cnt[i] > 0) {
            for (int j = 0; j < cnt[i]/2; j++) ret += (char)(i + 'A');
        }
    }
    temp = ret;
    reverse(temp.begin(), temp.end());
    if (odd_cnt) ret += odd_chr;
    ret += temp;
    cout << ret << '\n';
    return 0;
}
