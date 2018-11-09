#include <bits/stdc++.h>
using namespace std;
long long etf(long long n);
int main() {
	long long T, n, i, j, ans;
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld", &n);
		ans=etf(n);
		printf("%lld\n", ans);
	}
	return 0;
}
long long etf(long long n)
{
	long long i, j, ans=n;
	for(i=2; i*i<=n; i++)
	{
		if(n%i==0)
		{
			ans=ans-(ans/i);
		}
		while(n%i==0)
		{
			n=n/i;
		}
	}
	if(n>1)
	{
		ans=ans-(ans/n);
	}
	return ans;
}