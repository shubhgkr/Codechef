/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/5/20.
 * Problem link: https://www.codechef.com/problems/SEGM01
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
		int p1 = s.find_first_of('1');
		int pL = s.find_last_of('1');
		int p0 = s.find_first_of('0', p1);
		if (p1 != -1 && (p0 == -1 || p0 > pL))
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
