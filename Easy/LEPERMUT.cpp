/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 09/03/20.
 * Problem link: https://www.codechef.com/problems/LEPERMUT
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++)
				if (arr[i] > arr[j])
					cnt++;
		}
		for (int i = 0; i < n - 1; ++i) {
			if (arr[i] > arr[i + 1])
				cnt--;
		}
		if (cnt == 0)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
