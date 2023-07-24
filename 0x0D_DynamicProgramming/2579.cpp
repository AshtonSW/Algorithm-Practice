#include <bits/stdc++.h>
using namespace std;

int N;
int score[305];
int dp[305][2]; // 2�� ����� � ��� �ö�Դ����� ���� ����

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> score[i];
	if (N == 1) {
		cout << score[1];
		return 0;
	}
	dp[1][1] = score[1];
	dp[1][2] = 0;
	dp[2][1] = score[2]; // �� ���� �ö�� ���(1��� ����)
	dp[2][2] = score[1] + score[2]; // 2���� ����� ��� �ö�� ���
	for (int i = 3; i <= N; i++) {
		dp[i][1] = max(dp[i - 2][1], dp[i - 2][2]) + score[i];
		dp[i][2] = dp[i - 1][1] + score[i];
	}
	cout << max(dp[N][1], dp[N][2]);
}