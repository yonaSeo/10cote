#include <bits/stdc++.h>
using namespace std;
int cost[3], parkcnt[100], a, b, sum;

int main(void) {
    for (int i = 0; i < 3; i++) cin >> cost[i];
    for (int i = 0; i < 3; i++) {
        cin >> a >> b;
        for (int j = a; j < b; j++) parkcnt[j]++; // a 이상, b 미만
    }
    for (int i = 0; i < 100; i++) {
        if (parkcnt[i]) sum += cost[parkcnt[i] - 1] * parkcnt[i];
    }
    cout << sum << '\n';
    return 0;
}
