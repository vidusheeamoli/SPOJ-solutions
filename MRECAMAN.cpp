#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll i, n, T, value;
	ll v[500005];
	int isPresent[10000000]={0};
	v[0]=0;
	isPresent[0]=1;
	for(i=1; i<=500000; i++)
	{
		value=v[i-1]-i;
		if(value>0 && isPresent[value]==0)
		{
			v[i]=value;
			isPresent[value]=1;
		}
		else
		{
			value=v[i-1]+i;
			v[i]=value;
			isPresent[value]=1;
		}
	}
	while(1)
	{
		scanf("%lld", &n);
		if(n==-1)
		{
			break;
		}
		printf("%lld\n", v[n]);
	}
	return 0;
}