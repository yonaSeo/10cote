#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a[3] = {1, 2, 3};
    int *b = a;
    cout << &a[0] << '\n';
    cout << b << '\n';
    cout << &a[0] + 1 << '\n';
    cout << (b + 1) << '\n';
}
