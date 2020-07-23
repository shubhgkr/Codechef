/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/23/20.
 * Problem link: https://www.codechef.com/problems/VOTERS
 */

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n1;
	int n2;
	int n3;
	std::cin >> n1 >> n2 >> n3;
	std::vector<int> vec1;
	std::vector<int> vec2;
	std::vector<int> vec3;
	int inp;
	for (int i = 0; i < n1; ++i) {
		std::cin >> inp;
		vec1.push_back(inp);
	}
	for (int i = 0; i < n2; ++i) {
		std::cin >> inp;
		vec2.push_back(inp);
	}
	for (int i = 0; i < n3; ++i) {
		std::cin >> inp;
		vec3.push_back(inp);
	}
	std::vector<int> vec;
	std::set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::back_inserter(vec));
	std::set_intersection(vec2.begin(), vec2.end(), vec3.begin(), vec3.end(), std::back_inserter(vec));
	std::set_intersection(vec1.begin(), vec1.end(), vec3.begin(), vec3.end(), std::back_inserter(vec));
	std::sort(vec.begin(), vec.end());
	std::set<int> st(vec.begin(), vec.end());
	std::cout << st.size() << "\n";
	for (auto it = st.begin(); it != st.end(); it++) {
		std::cout << *it << "\n";
	}
	return 0;
}
