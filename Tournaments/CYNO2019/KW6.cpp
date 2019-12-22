/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 18/11/19.
 * Problem link: https://www.codechef.com/CYNO2019/problems/KW6
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	int cO = 0, cE = 0;
	int x;
	while (n--) {
		std::cin >> x;
		if (x & 1)
			cO++;
		else
			cE++;
	}
	if (std::abs(cO - cE) <= 1)
		std::cout << "DL";
	else
		std::cout << "DETAIN";
	return 0;
}
