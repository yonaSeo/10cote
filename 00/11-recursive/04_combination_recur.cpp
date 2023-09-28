#include <bits/stdc++.h>
using namespace std;

int n = 5, r = 3;
string a[10] = {"apple", "banana", "cat", "dragon", "egg"};

void print(vector<int> v) {
	for (int i : v) cout << a[i] << ' ';
	cout << '\n';
}

void combi(int start, vector<int> v) {
	if (v.size() == r) {
		print(v);
		return;
	}
	for (int i = start + 1; i < n; i++) {
		v.push_back(i);
		combi(i, v);
		v.pop_back();
	}
}

int main(void) {
	vector<int> v;
	combi(-1, v);
	return 0;
}
