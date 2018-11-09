#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll anarc(ll n, ll d);
int main() {
	char a[100];
	ll j, n, ans;
	while(1)
	{
		scanf("%s", a);
		if(a[0]=='0' && a[1]=='0' && a[3]=='0')
		{
			break;
		}
		n=10*(a[0]-'0')+(a[1]-'0');
		j=a[3]-'0';
		while(j--)
		{
			n=n*10;
		}
		ans=anarc(n, 2);
		printf("%lld\n", ans);
	}
	return 0;
}
ll anarc(ll n, ll d)
{
	ll p = 1;
    while (p <= n)
    {
    	p *= 2;
    }
    return (2*n) - p + 1;
}