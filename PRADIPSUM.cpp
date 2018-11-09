#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll a, b, i, temp;
	while(scanf("%lld %lld", &a, &b)!=EOF)
	{
		if(a>=0 && b>=0)
		{
			temp=0;
			i=max(a, b);
			if(i<0)
			{
				temp-=(i*(i+1))/2;
			}
			else
			{
				temp+=(i*(i+1))/2;
			}
			i=min(a, b);
			temp+=i;
			if(i<0)
			{
				temp+=(i*(i+1))/2;
			}
			else
			{
				temp-=(i*(i+1))/2;
			}
			printf("%lld\n", temp);
		}
		else if(a<0 && b<0)
		{
			a=0-a;
			b=0-b;
			temp=0;
			i=max(a, b);
			if(i<0)
			{
				temp-=(i*(i+1))/2;
			}
			else
			{
				temp+=(i*(i+1))/2;
			}
			i=min(a, b);
			temp+=i;
			if(i<0)
			{
				temp+=(i*(i+1))/2;
			}
			else
			{
				temp-=(i*(i+1))/2;
			}
			temp=0-temp;
			printf("%lld\n", temp);
		}
		else
		{
			i=max(a, b);
			temp=(i*(i+1))/2;
			i=min(a, b);
			i=abs(i);
			temp-=(i*(i+1))/2;
			printf("%lld\n", temp);
		}
	}
	return 0;
}