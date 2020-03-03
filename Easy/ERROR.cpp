/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 03/03/20.
 * Problem link: https://www.codechef.com/problems/ERROR
 */

#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		if(s.find("101")==std::string::npos && s.find("010")==std::string::npos)
			std::cout<<"Bad\n";
		else
			std::cout<<"Good\n";
	}
	return 0;
}
