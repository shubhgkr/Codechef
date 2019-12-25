/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 25/12/19.
 * Problem link: https://www.codechef.com/problems/EXAM1
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::string ans;
		std::string correctAns;
		std::cin >> correctAns >> ans;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if(ans[i] == 'N')
				continue;
			if (ans[i] != correctAns[i])
				i++;
			else
				cnt++;
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
