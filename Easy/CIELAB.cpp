/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 20/09/19.
 * Problem link: https://www.codechef.com/problems/CIELAB
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int a;
	int b;
	std::cin >> a >> b;
	int ans = a - b;
	if (ans % 10 == 9)
		ans--;
	else
		ans++;
	std::cout << ans;
	return 0;
}
