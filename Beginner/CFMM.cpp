/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 23/12/19.
 * Problem link: https://www.codechef.com/problems/CFMM
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
		std::string s;
		std::string tmp;
		while (n--) {
			std::cin >> tmp;
			s += tmp;
		}
		int cntC = 0;
		int cntO = 0;
		int cntD = 0;
		int cntE = 0;
		int cntH = 0;
		int cntF = 0;
		for (char ch:s) {
			switch (ch) {
				case 'c':
					cntC++;
					break;
				case 'o':
					cntO++;
					break;
				case 'd':
					cntD++;
					break;
				case 'e':
					cntE++;
					break;
				case 'h':
					cntH++;
					break;
				case 'f':
					cntF++;
					break;
				default:
					break;
			}
		}
		cntC >>= 1;
		cntE >>= 1;
		int ans = std::min(cntC, std::min(cntO, std::min(cntD, std::min(cntE, std::min(cntH, cntF)))));
		std::cout << ans << "\n";
	}
	return 0;
}
