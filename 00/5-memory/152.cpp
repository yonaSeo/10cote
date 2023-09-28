#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a = 4;
    int *b = &a;
    double c = 4.9;
    double *d = &c;
    cout << sizeof(b) << '\n';
    cout << sizeof(d) << '\n';
}
