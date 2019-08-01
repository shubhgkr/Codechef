/*
    Created by shubhgkr on 1/8/19.
    https://www.codechef.com/problems/LUCKFOUR
*/

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        std::cout << std::count(s.begin(), s.end(), '4') << "\n";
    }
    return 0;
}