#include <bits/stdc++.h>
using namespace std;

int main(void) {
    deque<int> dq;

    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    cout << dq.front() << '\n';
    cout << dq.back() << '\n';
    cout << dq.size() << '\n';
    dq.pop_front();
    dq.pop_back();
    cout << dq.size() << '\n';

    return 0;
}
