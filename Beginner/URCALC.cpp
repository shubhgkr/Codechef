/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 24/12/19.
 * Problem link: https://www.codechef.com/problems/URCALC
 */

#include <iostream>

using namespace std;

int main() {
	double a, b;
	char ch;
	scanf("%lf %lf %c", &a, &b, &ch);
	if (ch == '+')
		printf("%lf", a + b);
	else if (ch == '-')
		printf("%lf", a - b);
	else if (ch == '/')
		printf("%lf", a / b);
	else if (ch == '*')
		printf("%lf", a * b);
	return 0;
}
