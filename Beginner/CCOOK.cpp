/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 17/09/19.
 * Problem link: https://www.codechef.com/problems/CCOOK
 */

#include <iostream>
#include <string>
int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	while (n--) {
		int cnt = 0;
		for (int i = 0; i < 5; i++) {
			bool x;
			std::cin >> x;
			cnt += x;
		}
		std::string arr[] = {"Beginner", "Junior Developer", "Middle Developer", "Senior Developer", "Hacker",
							 "Jeff Dean"};
		std::cout << arr[cnt]<<"\n";
	}
	return 0;
}
