#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 1; j < i; j++) {
			cout << " ";
		}
		for (int j = 2 * i; j < 2 * n + 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 0; i < n - 1; i++) cout << ' ';
	cout << "*" << '\n';
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}

}