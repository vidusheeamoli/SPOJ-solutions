#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
	ll n, i, len, T;
	char a[50005];
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld", &n);
		scanf("%s", a);
		printf("%c\n", a[strlen(a)-1]);
	}
	return 0;
}