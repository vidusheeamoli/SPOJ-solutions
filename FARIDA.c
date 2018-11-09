#include <stdio.h>

long long max(long long a, long long b)
{
	return (a>b)?a:b;
}

int main(void) {
	long long T, i, k, n, include, exclude, ex;
	scanf("%lld", &T);
	for(k=1; k<=T; k++)
	{
		scanf("%lld", &n);
		long long a[n];
		for(i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
		}
		include=a[0];
		exclude=0;
		for(i=1; i<n; i++)
		{
			ex=max(include, exclude);
			include=exclude+a[i];
			exclude=ex;
		}
		if(include>exclude)
		{
			printf("Case %lld: %lld\n", k, include);
		}
		else
		{
			printf("Case %lld: %lld\n", k, exclude);
		}
	}
	return 0;
}
