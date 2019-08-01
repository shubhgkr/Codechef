/*
 Created by shubhgkr on 1/8/19.
 https://www.codechef.com/problems/CHOPRT
 */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    int a;
    int b;
    while (t--) {
        std::cin >> a >> b;
        if (a > b)
            std::cout << ">\n";
        else if (a == b)
            std::cout << "=\n";
        else
            std::cout << "<\n";
    }
    return 0;
}