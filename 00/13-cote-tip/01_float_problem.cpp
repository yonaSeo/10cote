#include <bits/stdc++.h>
using namespace std;

int main(void) {
    // if (0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 == 1)
    //     cout << "Yes!" << '\n';
    // if (0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 - 1 < 1e-9)
    //     cout << "Yes!" << '\n';

    double a = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
    double b = 1;
    double value = a - b;
    if (value < 1e-9) cout << "Yes!\n";
    return 0;
}
