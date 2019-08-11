/*
	Created by shubhgkr on 12/08/19.
	https://www.codechef.com/problems/AMR15A
*/

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n = 0;
	std::cin >> n;
	int counter = 0;
	int a = 0;
	while (n--) {
		std::cin >> a;
		if (a & 1)
			counter--;
		else
			counter++;
	}
	if (counter > 0)
		std::cout << "READY FOR BATTLE" << "\n";
	else
		std::cout << "NOT READY";
	return 0;
}