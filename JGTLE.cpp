#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main(void)
{
	ll a, b, c, T, i, ans;
	scanf("%llu", &T);
	for(i=1; i<=T; i++)
	{
		scanf("%llu %llu %llu", &a, &b, &c);
		ans=(c*(c+1))/2;
		ans=ans*((b*(b+1))/2);
		ans=ans*a;
		printf("Case %llu: %llu\n", i, ans);
	}
}