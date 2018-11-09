#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	bool check;
	ll n, T, i, j;
	scanf("%lld", &T);
	while(T--)
	{
		check=false;
		scanf("%lld", &n);
		i=sqrt(n);
		j=0;
		while(i>=0)
		{
			if((i*i+j*j)==n)
			{
				check=true;
				break;
			}
			else if((i*i+j*j) < n)
			{
				j++;
			}
			else
			{
				i--;
			}
		}
		if(check)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}