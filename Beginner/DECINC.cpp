/*
 Created by shubhgkr on 31/07/19.
 https://www.codechef.com/problems/DECINC
*/

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n = 0;
	std::cin >> n;
	if (n % 4 == 0)
		n++;
	else
		n--;
	std::cout << n;
	return 0;
}