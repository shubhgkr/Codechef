/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/1/20.
 * Problem link: https://www.codechef.com/problems/EID2
 */

#include <iostream>

bool returnDecision(int a, int b, int c, int d) {
	int flag = 0;
	if (a > b && c > d)
		flag = 1;
	if (a == b && c == d)
		flag = 1;
	if (a < b && c < d)
		flag = 1;
	return flag;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int a1;
		int a2;
		int a3;
		int c1;
		int c2;
		int c3;
		std::cin >> a1 >> a2 >> a3 >> c1 >> c2 >> c3;
		int a = returnDecision(a1, a2, c1, c2);
		int b = returnDecision(a2, a3, c2, c3);
		int c = returnDecision(a1, a3, c1, c3);
		if (a && b && c)
			std::cout << "FAIR\n";
		else
			std::cout << "NOT FAIR\n";
	}
	return 0;
}
