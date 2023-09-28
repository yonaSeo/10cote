#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq_asc;
priority_queue<int, vector<int>, less<int>> pq_desc1;
priority_queue<int> pq_desc2;

int main(void) {
    for (int i = 5; i >= 1; i--) {
        pq_asc.push(i);
        pq_desc1.push(i);
        pq_desc2.push(i);
    }
    while (pq_asc.size()) {
        cout << pq_asc.top() << " | " << pq_desc1.top() << " | " << pq_desc2.top() << '\n';
        pq_asc.pop();
        pq_desc1.pop();
        pq_desc2.pop();
    }
    return 0;
}
