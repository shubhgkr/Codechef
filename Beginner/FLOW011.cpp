/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 17/09/19.
 * Problem link: https://www.codechef.com/problems/FLOW011
 */

#include <iostream>
#include <iomanip>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		float salary;
		std::cin >> salary;
		float grossSalary = salary;
		if (salary < 1500)
			grossSalary += salary;
		else
			grossSalary += 500.0f + (0.98f * salary);
		std::cout << std::fixed << std::setprecision(2) << grossSalary << "\n";
	}
	return 0;
}
