/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 03/03/20.
 * Problem link: https://www.codechef.com/problems/DIVIDING
 */

#include<iostream>
#include <cmath>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin>>n;
	long long int sum=0;
	long num;
	while(n--){
		std::cin>>num;
		sum+=num;
	}
	long root=(-1+std::sqrt(1+(8*sum)))/2;
	if(root*(root+1)==sum*2)
		std::cout<<"YES\n";
	else
		std::cout<<"NO\n";
	return 0;
}
