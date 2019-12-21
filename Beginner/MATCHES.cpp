/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 21/12/19.
 * Problem link: https://www.codechef.com/problems/MATCHES
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int digits[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	int t;
	std::cin >> t;
	int a;
	int b;
	int sum;
	int cnt;
	while (t--) {
		std::cin >> a >> b;
		sum = a + b;
		cnt = 0;
		while (sum != 0) {
			cnt += digits[sum % 10];
			sum /= 10;
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
