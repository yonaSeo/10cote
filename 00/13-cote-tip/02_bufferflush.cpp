#include <bits/stdc++.h>
using namespace std;

int main(void) {
    for (int i = 1; i <= 5; i++) {
        cout << i << '\n';
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl; // endl = '\n' + bufferflush

    for (int i = 1; i <= 5; i++) {
        cout << i << '\n' <<  flush;
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;

    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;
}
