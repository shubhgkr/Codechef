/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/27/20.
 * Problem link: https://www.codechef.com/problems/TYPING
 */

#include <iostream>
#include <map>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::map<std::string, int> mp;
		std::string arr[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		int mxSum = 0;
		for (int i = 0; i < n; ++i) {
			if (mp.find(arr[i]) != mp.end()) {
				mxSum += (mp[arr[i]] / 2);
			} else {
				int currSum = 2;
				bool isLeft = (arr[i][0] == 'd' || arr[i][0] == 'f');
				for (int j = 1; j < arr[i].length(); ++j) {
					if (arr[i][j] == 'd' || arr[i][j] == 'f') {
						if (isLeft)
							currSum += 4;
						else
							currSum += 2;
						isLeft = true;
					} else {
						if (isLeft)
							currSum += 2;
						else
							currSum += 4;
						isLeft = false;
					}
				}
				mxSum += currSum;
				mp[arr[i]] = currSum;
			}
		}
		std::cout << mxSum << "\n";
	}
	return 0;
}
