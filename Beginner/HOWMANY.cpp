/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 19/09/19.
 * Problem link: https://www.codechef.com/problems/HOWMANY
 */

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::string n;
	std::cin >> n;
	int len = n.length();
	if (len <= 3)
		std::cout << len;
	else
		std::cout << "More than 3 digits";
	return 0;
}
