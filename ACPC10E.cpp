#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main(void)
{
	ll i, x, y, count, two, z, j, g, t, a, d, check=0;
	while(check==0)
	{
		scanf("%llu %llu %llu %llu", &g, &t, &a, &d);
		if(g==-1 && t==-1 && a==-1 && d==-1)
		{
			check=1;
			break;
		}
		//x=number of games
		x=(t*(t-1))/2;
		x=g*x;
		//z=number of teams going to round 2
		z=(g*a)+d;
		two=1;
		while(two<z)
		{
			two=two*2;
		}
		if(two-z==0)
		{
			y=0;
		}
		else
		{
			y=two-z;
			z=z+y;
		}
		while(z>0)
		{
			z=z/2;
			x=x+z;
		}
		printf("%lld*%lld/%lld+%lld=%lld+%lld\n", g, a, t, d, x, y);
	}
	return 0;
}