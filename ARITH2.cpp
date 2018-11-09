#include <bits/stdc++.h>
using namespace std;
int main() {
	long long T, ans, b;
	char a;
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld", &ans);
		while(1)
		{
			scanf("%c", &a);
			if(a=='=')
			{
				printf("%lld\n", ans);
				break;
			}
			if(a==' ') //CHECK FOR SPACE FFS
			{
				continue;
			}
			scanf("%lld", &b);
			if(a=='+')
			{
				ans=ans+b;
			}
			else if(a=='-')
			{
				ans=ans-b;
			}
			else if(a=='*')
			{
				ans=ans*b;
			}
			else if(a=='/')
			{
				ans=ans/b;
			}
		}
	//	printf("%lld\n", ans);
	}
	return 0;
}