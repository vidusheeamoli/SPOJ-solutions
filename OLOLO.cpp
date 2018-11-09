#include <bits/stdc++.h>

int main(void) {
	long long i, n, x;
	long long ans=0;
	scanf("%lld", &n);
	long long a[n];
	for(i=0; i<n; i++)
	{
		scanf("%lld", &a[i]);
		ans=ans^a[i];
	}
	printf("%lld\n", ans);
	return 0;
}

