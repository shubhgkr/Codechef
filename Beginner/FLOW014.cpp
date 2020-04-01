/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/1/20.
 * Problem link: https://www.codechef.com/problems/FLOW014
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		float hardness;
		float carbon;
		float tensile;
		std::cin >> hardness >> carbon >> tensile;
		if (hardness > 50 && carbon < 0.7 && tensile > 5600)
			std::cout << "10\n";
		else if (hardness > 50 && carbon < 0.7)
			std::cout << "9\n";
		else if (tensile > 5600 && carbon < 0.7)
			std::cout << "8\n";
		else if (hardness > 50 && tensile > 5600)
			std::cout << "7\n";
		else if (hardness > 50 || carbon < 0.7 || tensile > 5600)
			std::cout << "6\n";
		else
			std::cout << "5\n";
	}
	return 0;
}
