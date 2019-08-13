/*
	Created by shubhgkr on 12/08/19.
	https://www.codechef.com/problems/HS08TEST
*/

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	float x;
	float y;
	std::cin >> x >> y;
	if (y - 0.5 < x || x % 5 != 0)
		std::cout << y;
	else
		std::cout << y - x - 0.5;
	return 0;
}