/*
	Created by shubhgkr on 11/08/19.
	https://www.codechef.com/problems/TABLET
*/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int b;
		int p;
		int w;
		int h;
		int mxArea = 0;
		std::cin >> n >> b;
		while (n--) {
			std::cin >> w >> h >> p;
			if (p <= b)
				mxArea = std::max(mxArea, w * h);
		}
		if (mxArea == 0)
			std::cout << "no tablet\n";
		else
			std::cout << mxArea << "\n";
	}
	return 0;
}