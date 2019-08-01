/*
    Created by shubhgkr on 1/8/19.
    https://www.codechef.com/problems/RRJOKE
*/

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int x;
        int y;
        long ans = 0;
        for (int i = 1; i <= n; ++i) {
            ans ^= i;
            std::cin >> x >> y;
        }
        std::cout << ans << "\n";
    }
    return 0;
}