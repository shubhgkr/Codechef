/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 13/03/20.
 * Problem link: https://www.codechef.com/problems/MXCH
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int k;
		std::cin >> n >> k;
		int arr[n];
		int cnt = 1;
		for (int i = 0; i < k; i++)
			arr[i] = cnt++;
		for (int i = n - 1; i >= k; i--)
			arr[i] = cnt++;
		for (int i = 0; i < n; i++)
			std::cout << arr[i] << " ";
		std::cout <<"\n" ;
	}
	return 0;
}
