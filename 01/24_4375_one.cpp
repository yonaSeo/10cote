#include <bits/stdc++.h>
using namespace std;
int n;

int main(void) {
    while (cin >> n) {
        long long cnt = 1, pos = 1;
        while (true) {
            if (cnt % n == 0) {
                cout << pos << '\n';
                break;
            } else {
                cnt = cnt * 10 + 1;
                // cnt = (cnt % n * 10 % n) + 1; // 위와 결과가 같음
                cnt %= n;
                pos++;
            }
        }
    }
    return 0;
}

// int main(void) {
//     while (cin >> n) {
//         string one = "1";
//         while (1) {
//             if (atoll(one.c_str()) % n) one += '1';
//             else break;
//         }
//         cout << one.size() << '\n';
//     }
//     return 0;
// }
