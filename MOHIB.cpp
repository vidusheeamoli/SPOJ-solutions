#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while(T--)
	{
		long long a, n, x, ans, temp;
		scanf("%lld %lld", &x, &a);
		n=a-x;
		temp=(n*(n-1))/2;
		ans=n*(a+1)-temp;
		printf("%lld\n", ans);
	}
	return 0;
}