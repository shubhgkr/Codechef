/*
	Created by shubhgkr on 11/08/19.
	https://www.codechef.com/problems/SNCKYEAR
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
		if (n == 2010 || n == 2015 || n == 2016 || n == 2017 || n == 2019)
			std::cout << "HOSTED\n";
		else
			std::cout << "NOT HOSTED\n";
	}
	return 0;
}