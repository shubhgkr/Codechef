/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 03/03/20.
 * Problem link: https://www.codechef.com/problems/OJUMPS
 */

#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	long long int n;
	std::cin >> n;
	n %= 6;
	if (n == 0 || n == 1 || n == 3)
		std::cout << "yes";
	else
		std::cout << "no";
	return 0;
}
