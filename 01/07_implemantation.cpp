#include <bits/stdc++.h>
using namespace std;
string str = "asdf";

int main(void) {
    // 0. 구현 문제는 먼저 주석으로 구현 내용을 적고 그 밑에 코드 작성
    // 1. 3개 출력
    cout << str.substr(0, 3) << '\n';
    // 2. 거꾸로 출력
    reverse(str.begin(), str.end());
    cout << str << '\n';
    // 3. 엄준식 추가
    cout << str << " umzunsik\n";
    return 0;
}
