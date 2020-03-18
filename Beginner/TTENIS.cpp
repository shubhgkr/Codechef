/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 3/18/20.
 * Problem link: https://www.codechef.com/problems/TTENIS
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		int opponent = 0;
		int chef = 0;
		std::string won = "";
		for (char ch:s) {
			if (ch == '0')
				opponent++;
			else
				chef++;
			if ((opponent == 11 && chef < 10) || (opponent - chef == 2))
				won = "LOSE";
			else if ((opponent < 10 && chef == 11) || (chef - opponent == 2))
				won = "WIN";
		}
		std::cout << won << "\n";
	}
	return 0;
}
