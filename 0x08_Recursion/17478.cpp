// Authored by : AshtonSW
// https://www.acmicpc.net/problem/17478

#include <bits/stdc++.h>
using namespace std;
string arr[51];
stack <string> stk;

void recur(int n) {
	string s = "";
	int a = n;
	stk.push(s);
	while (n > -1) {
		cout << s << "\"����Լ��� ������?\"" << '\n';
		if (n == 0) {
			cout << s << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << '\n';
			for (int i = 1; i <= a; i++) {
				if (!stk.empty()) {
					cout << stk.top() << "��� �亯�Ͽ���." << '\n';
					stk.pop();
				}
			}
			cout << "��� �亯�Ͽ���.";
			return;
		}
		else {
			cout << s << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << '\n';
			cout << s << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << '\n';
			cout << s << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << '\n';
			s += "____";
			stk.push(s);
			n--;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << '\n';
	recur(n);
}
