#include <bits/stdc++.h>
using namespace std;

void go1(int a[][3]) {
    a[2][2] = 100;
}

void go2(int a[3][3]) {
    a[2][2] = 100;
}

int main(void) {
    int a[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

    go1(a); cout << a[2][2] << '\n';
    go2(a); cout << a[2][2] << '\n';
}
