/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 19/09/19.
 * Problem link: https://www.codechef.com/problems/AREAPERI
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int l;
	int b;
	std::cin >> l >> b;
	int area = l * b;
	int peri = 2 * (l + b);
	if (area > peri)
		std::cout << "Area\n" << area;
	else if (area == peri)
		std::cout << "Eq\n" << area;
	else
		std::cout << "Peri\n" << peri;
	return 0;
}
