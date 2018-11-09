#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, a, two, i, j;
	char str[100005];
	scanf("%lld", &n);
	while(n--)
	{
		scanf("%lld", &a);
		if(a%2==1)
		{
			printf("%lld\n", a);
			continue;
		}
		i=0;
		while(a>0)
		{
			str[i]=a%2+'0';
			a=a/2;
			i++;
		}
		a=0;
		j=i;
		two=1;
		for(i=j-1; i>=0; i--)
		{
			a=a+two*(str[i]-'0');
			two*=2;
		}
		printf("%lld\n", a);
	}
	return 0;
}