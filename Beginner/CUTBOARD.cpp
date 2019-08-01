/*
    Created by shubhgkr on 1/8/19.
    https://www.codechef.com/problems/CUTBOARD
*/

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    int n;
    int m;
    while (t--) {
        std::cin >> n >> m;
        std::cout << ((n - 1) * (m - 1)) << "\n";
    }
    return 0;
}