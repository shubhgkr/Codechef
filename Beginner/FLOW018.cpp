/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 16/09/19.
 * https://www.codechef.com/problems/FLOW018
 */

#include <iostream>

int dp[21][20];
int s[21];

void preProcess() {
	dp[1][0] = 1;
	s[1] = 1;
	for (int i = 2; i < 21; i++) {
		int j = 0, rem = 0;
		s[i] = s[i - 1];
		while (j < s[i]) {
			dp[i][j] = dp[i - 1][j] * i + rem;
			rem = dp[i][j] / 10;
			dp[i][j] %= 10;
			j++;
		}
		while (rem) {
			dp[i][j] = rem % 10;
			rem /= 10;
			s[i]++;
			j++;
		}
	}
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	preProcess();
	int t;
	std::cin >> t;
	s[0] = 1;
	dp[0][0] = 1;
	while (t--) {
		int n;
		std::cin >> n;
		for (int i = s[n] - 1; i >= 0; i--)
			std::cout << dp[n][i];
		std::cout << "\n";
	}
	return 0;
}
