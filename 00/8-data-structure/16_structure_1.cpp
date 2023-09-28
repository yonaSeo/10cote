#include <bits/stdc++.h>
using namespace std;

struct Ralo {
    int a, b;
    double c, d, e;
};

void print(Ralo ralo) {
    cout << ralo.a << " " << ralo.b << " " <<
    ralo.c << " " <<  ralo.d << " " << ralo.e << "\n";
}

int main(void) {
    Ralo ralo = {1, 1, 1, 1, 1};
    print(ralo);
    cout << '\n';

    vector<Ralo> v;
    v.push_back({1, 2, 3, 4, 5});
    v.push_back({1, 2, 3.3, 4.4, 55.5});
    v.push_back({});
    v.push_back({'1', 9});
    for (Ralo r : v) print(r);

    return 0;
}
