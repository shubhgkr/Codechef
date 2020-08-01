/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/1/20.
 * Problem link: https://www.codechef.com/problems/CHEFZOT
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	int arr[n + 1];
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}
	arr[n] = 0;
	int curr = 0;
	int mx = 0;
	for (int i:arr) {
		if (i)
			curr++;
		else {
			mx = std::max(curr, mx);
			curr = 0;
		}
	}
	std::cout << mx;
	return 0;
}
