/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 08/03/20.
 * Problem link: https://www.codechef.com/problems/PCYCLE
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	int arr[n + 1];
	bool isVisited[n + 1];
	std::fill(isVisited, isVisited + n + 1, false);
	for (int i = 1; i <= n; i++)
		std::cin >> arr[i];
	std::vector<std::vector<int>> vec;
	for (int i = 1; i <= n; i++) {
		if (!isVisited[i]) {
			std::vector<int> v1;
			isVisited[i] = true;
			v1.push_back(i);
			int curr = arr[i];
			while (i != curr) {
				v1.push_back(curr);
				isVisited[curr] = true;
				curr = arr[curr];
			}
			v1.push_back(curr);
			vec.push_back(v1);
		}
	}
	std::cout << vec.size() << "\n";
	for (auto v:vec) {
		for (auto val:v) {
			std::cout << val << " ";
		}
		std::cout << "\n";
	}
	return 0;
}
