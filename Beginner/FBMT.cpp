/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 26/12/19.
 * Problem link: https://www.codechef.com/problems/FBMT
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string team1;
		std::string team2;
		std::string team;
		int n;
		std::cin >> n;
		int s1 = 0;
		int s2 = 0;
		while (n--) {
			std::cin >> team;
			if (team == team1) {
				s1++;
				team1 = team;
			} else {
				s2++;
				team2 = team;
			}
		}
		if (s1 > s2)
			std::cout << team1 << "\n";
		else if (s1 < s2)
			std::cout << team2 << "\n";
		else
			std::cout << "Draw\n";
	}
	return 0;
}
