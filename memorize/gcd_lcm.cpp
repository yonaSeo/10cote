#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main(void) {
    int a = 12, b = 10;
    cout << "greatest common divisor: " << gcd(a, b) << '\n';
    cout << "least common multiplier: " << lcm(a, b) << '\n';
    return 0;
}
