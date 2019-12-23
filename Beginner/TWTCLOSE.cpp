/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 23/12/19.
 * Problem link: https://www.codechef.com/problems/TWTCLOSE
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	int k;
	std::cin >> n >> k;
	bool tweets[n];
	std::fill(tweets, tweets + n, false);
	std::string s;
	int totalOpen = 0;
	while (k--) {
		std::cin >> s;
		if (s == "CLOSEALL") {
			std::fill(tweets, tweets + n, false);
			totalOpen = 0;
		} else {
			int pos;
			std::cin >> pos;
			if (tweets[pos - 1])
				totalOpen--;
			else
				totalOpen++;
			tweets[pos - 1] ^= 1;
		}
		std::cout << totalOpen<<"\n";
	}
	return 0;
}
