/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 16/09/19.
 * https://www.codechef.com/problems/HEADBOB
 */

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::string s;
		std::cin >> s;
		int cntI = 0;
		int cntY = 0;
		int cntN = 0;
		for (char ch:s) {
			if (ch == 'N')
				cntN++;
			else if (ch == 'Y')
				cntY++;
			else
				cntI++;
		}
		if (cntI > 0)
			std::cout << "INDIAN\n";
		else if (cntY > 0)
			std::cout << "NOT INDIAN\n";
		else
			std::cout << "NOT SURE\n";
	}
	return 0;
}
