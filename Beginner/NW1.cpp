/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 7/25/20.
 * Problem link: https://www.codechef.com/problems/NW1
 */

#include <iostream>
#include <algorithm>
#include <map>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int arr[7];
	std::map<std::string, int> days;
	days["mon"] = 0;
	days["tues"] = 1;
	days["wed"] = 2;
	days["thurs"] = 3;
	days["fri"] = 4;
	days["sat"] = 5;
	days["sun"] = 6;

	while (t--) {
		std::fill(arr, arr + 7, 4);
		int w;
		std::string startingDay;
		std::cin >> w >> startingDay;
		int day = days[startingDay];
		for (int i = 29; i <= w; ++i) {
			arr[day]++;
			day = (day + 1) % 7;
		}
		for (int i:arr)
			std::cout << i << " ";
		std::cout << "\n";
	}
	return 0;
}
