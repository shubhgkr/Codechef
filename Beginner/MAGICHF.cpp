/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 4/1/20.
 * Problem link: https://www.codechef.com/problems/MAGICHF
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int n;
	int x;
	int s;
	int a;
	int b;
	while (t--) {
		std::cin >> n >> x >> s;
		while (s--) {
			std::cin >> a >> b;
			if (a == x)
				x = b;
			else if (b == x)
				x = a;
		}
		std::cout << x << "\n";
	}
	return 0;
}
