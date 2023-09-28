#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1) return 1;
    return n * fact(n - 1);
}

int fact_for(int n) {
    int ret = 1;
    for (int i = 1; i <= n; i++) ret *= i;
    return ret;
}

int main(void) {
    cout << fact(10) << '\n';
    cout << fact_for(10) << '\n';
    return 0;
}
