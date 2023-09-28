#include <bits/stdc++.h>
using namespace std;

int main(void) {
    stack<string> stk;

    stk.push("너");
    stk.push("의");
    stk.push("이");
    stk.push("름");
    stk.push("은");
    stk.push(".");
    while (stk.size())
    {
        cout << stk.top() << '\n';
        stk.pop();
    }

    return 0;
}
