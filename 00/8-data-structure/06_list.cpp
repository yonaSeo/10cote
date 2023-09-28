#include <bits/stdc++.h>
using namespace std;

list<int> l;

void print(list <int> l) {
    for (auto e : l) cout << e << ' ';
    cout << '\n';
}

int main(void) {
    for(int i = 1; i <= 3; i++) l.push_back(i);
    for(int i = 1; i <= 3; i++) l.push_front(i);
    print(l);

    auto it = l.begin();
    it++;
    l.insert(it, 9999);
    print(l);

    it = l.begin();
    it++;
    l.erase(it);
    print(l);

    l.pop_front();
    print(l);

    l.pop_back();
    print(l);

    cout << "front: " << l.front() << ", back: " << l.back() << '\n';
    l.clear();
    print(l);

    return 0;
}
