#include <bits/stdc++.h>
using namespace std;

int main(void) {
    set<pair<string, int>> st;
    st.insert({"test", 1});
    st.insert({"test", 1});
    st.insert({"test", 1});
    st.insert({"test", 1});
    st.insert({"test", 1});
    cout << st.size() << '\n';

    set<int> st2;
    st2.insert(2);
    st2.insert(1);
    st2.insert(3);
    st2.insert(3);
    st2.insert(3);
    st2.insert(2);
    for (auto e : st2) cout << e << ' ';
    return 0;
}
