/*
 * Created by shubhgkr on 15/09/19.
 * https://www.codechef.com/problems/INTEST
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	int k;
	std::cin >> n >> k;
	int num;
	int cnt = 0;
	while (n--) {
		std::cin >> num;
		cnt += (num % k == 0);
	}
	std::cout << cnt;
	return 0;
}
