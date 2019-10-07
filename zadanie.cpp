#include <bits/stdc++.h>
#define b std::vector<int>
#define c v[(i+m-1)/m-1][i%n]
int n,m,i;
int main()
{
	std::cin>>n>>m;
	std::vector<b >v(n,b(m));
	while(i++<n*m)
		c=i,std::cout<<c<<(i%m?" ":"\n");
}
