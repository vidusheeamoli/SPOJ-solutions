#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while(T--)
	{
		long long h, a, count=0, i, check=0;
		scanf("%lld %lld", &h, &a);
		while(h>0 && a>0)
		{
			if(check==0)
			{
				h+=3;
				a+=2;
				check=1;
			}
			else
			{
				if(h<a || a>10)
				{
					h-=5;
					a-=10;
				}
				else
				{
					h-=20;
					a+=5;
				}
				check=0;
			}
			count++;
		}
		printf("%lld\n", count-1);
	}
	return 0;
}