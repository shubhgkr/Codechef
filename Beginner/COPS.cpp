/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 3/18/20.
 * Problem link: https://www.codechef.com/problems/COPS
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int m;
		int x;
		int y;
		std::cin >> m >> x >> y;
		int arr[m];
		for (int i = 0; i < m; i++)
			std::cin >> arr[i];
		bool isOccupiedByCop[101] = {false};
		int dist = x * y;
		for (int i:arr) {
			int start = std::max(1, i - dist);
			int end = std::min(100, i + dist);
			for (int pos = start; pos <= end; pos++)
				isOccupiedByCop[pos] = true;
		}
		int cnt = 0;
		for (int i = 1; i <= 100; i++)
			if (!isOccupiedByCop[i])
				cnt++;
		std::cout << cnt << "\n";
	}
	return 0;
}
