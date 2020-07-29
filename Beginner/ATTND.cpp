/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/29/20.
 * Problem link: https://www.codechef.com/problems/ATTND
 */

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::unordered_map<std::string, int> mp;
		std::vector<std::pair<std::string, std::string>> names;
		std::string fname;
		std::string lname;
		for (int i = 0; i < n; ++i) {
			std::cin >> fname >> lname;
			auto x = std::pair<std::string, std::string>(fname, lname);
			names.push_back(x);
			mp[fname]++;
		}
		for (auto &name : names) {
			if (mp[name.first] == 1)
				std::cout << name.first << "\n";
			else {
				std::cout << name.first << " " << name.second << "\n";
			}
		}
	}
}
