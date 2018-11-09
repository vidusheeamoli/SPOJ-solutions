#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll T, n, i, k;
	scanf("%lld", &T);
	for(k=1; k<=T; k++)
	{
		scanf("%lld", &n);
		if(n%2==1)
		{
			printf("Case %lld: %lld\n", k, n);
		}
		else
		{
			while(n%2!=1)
			{
				n=n/2;
			}
			printf("Case %lld: %lld\n", k, n);
		}
	}
	return 0;
}