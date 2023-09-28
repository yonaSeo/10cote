#include <bits/stdc++.h>
using namespace std;

struct Ralo {
    int a, b;
};

bool compare(Ralo A, Ralo B) {
    if (A.a == B.a) return A.b < B.b;
    return A.a < B.a;
}

int main(void) {
    Ralo arr[3] = {{1, 3}, {1, 2}, {0, 4}};
    sort(&arr[0], &arr[0] + 3, compare);
    for (auto r : arr) cout << r.a << ", " << r.b << '\n';
    cout << '\n';

    return 0;
}
