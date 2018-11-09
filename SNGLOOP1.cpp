#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll T;
	scanf("%lld", &T);
	while(T--)
	{
		ll n, m, p;
		scanf("%lld %lld", &n, &m);
		p=(m-n)%4;
		if(p==0)
		{
			printf("1\n");
		}
		else if(p==1)
		{
			printf("3\n");
		}
		else if(p==2)
		{
			printf("9\n");
		}
		else
		{
			printf("7\n");
		}
	}
	return 0;
}