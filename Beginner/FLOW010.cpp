/*
    Created by shubhgkr on 13/8/19.
    https://www.codechef.com/problems/FLOW010
*/

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	char x;
	while (t--) {
		std::cin >> x;
		if (x == 'b' || x == 'B')
			std::cout << "BattleShip\n";
		else if (x == 'c' || x == 'C')
			std::cout << "Cruiser\n";
		else if (x == 'd' || x == 'D')
			std::cout << "Destroyer\n";
		else
			std::cout << "Frigate\n";
	}
	return 0;
}