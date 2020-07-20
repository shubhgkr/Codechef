/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/20/20.
 * Problem link: https://www.codechef.com/problems/PLZLYKME
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		long long int l;
		long long int d;
		long long int s;
		long long int c;
		std::cin >> l >> d >> s >> c;
		long long int temp = s;
		while (--d) {
			temp = temp + (temp * c);
			if (temp >= l) {
				break;
			}
		}
		if (temp >= l)
			std::cout << "ALIVE AND KICKING\n";
		else
			std::cout << "DEAD AND ROTTING\n";
	}
	return 0;
}
