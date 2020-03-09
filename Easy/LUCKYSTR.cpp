/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 10/03/20.
 * Problem link: https://www.codechef.com/problems/LUCKYSTR
 */

#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int k, n;
	std::cin >> k >> n;
	std::string arr[k];
	std::string str[n];
	for (int i = 0; i < k; i++)
		std::cin >> arr[i];
	for (int i = 0; i < n; i++)
		std::cin >> str[i];
	for (int i = 0; i < n; i++) {
		if (str[i].length() >= 47)
			std::cout << "Good\n";
		else {
			bool flag = false;
			for (int j = 0; j < k; j++)
				if (str[i].find(arr[j]) != std::string::npos) {
					flag = true;
					break;
				}
			if (flag)
				std::cout << "Good\n";
			else
				std::cout << "Bad\n";
		}
	}
	return 0;
}
