/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 09/03/20.
 * Problem link: https://www.codechef.com/problems/CNOTE
 */

#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int x, y, k, n;
		std::cin >> x >> y >> k >> n;
		int notebookPages[n];
		int notebookPrice[n];
		for (int i = 0; i < n; i++)
			std::cin >> notebookPages[i] >> notebookPrice[i];
		int pos = -1;
		for (int i = 0; i < n; i++) {
			if (notebookPrice[i] <= k && notebookPages[i] + y >= x &&
				(notebookPrice[i] < notebookPrice[pos] || pos == -1))
				pos = i;
		}
		if (pos != -1)
			std::cout << "LuckyChef\n";
		else
			std::cout << "UnluckyChef\n";
	}
	return 0;
}
