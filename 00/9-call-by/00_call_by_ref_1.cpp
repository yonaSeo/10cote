#include <bits/stdc++.h>
using namespace std;

int add(int &a, int b) {
    a += 10;
    cout << "a: " << a << '\n';
    return a + b;
}

int main(void) {
    int a = 1;
    int b = 2;
    int sum = add(a, b);
    cout << "sum: " << sum << '\n';
    cout << "a: " << a << '\n';
    return 0;
}
