/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 13/03/20.
 * Problem link: https://www.codechef.com/problems/PIPSQUIK
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int h;
		int y1;
		int y2;
		int l;
		int type;
		int pos;
		std::cin >> n >> h >> y1 >> y2 >> l;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			std::cin >> type >> pos;
			if (l) {
				if (type == 1 && pos < h - y1)
					--l;
				else if (type == 2 && pos > y2)
					--l;
				if (l)
					cnt++;
			}
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
