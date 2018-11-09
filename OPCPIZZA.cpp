#include <bits/stdc++.h>
using namespace std;
long long bs(long long a[], long long l, long long r, long long j);
int main() {
	long long n, T, m, i, count;
	scanf("%lld", &T);
	while(T--)
	{
		count=0;
		scanf("%lld %lld", &n, &m);
		long long a[n];
		for(i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
		}
		sort(a, a+n);
		for(i=0; i<n; i++)
		{
			if(bs(a, 0, n-1, m-a[i])!=-1)
			{
				count++;
			}
		}
		printf("%lld\n", count/2);
	}
	return 0;
}

long long bs(long long a[], long long l, long long r, long long j)
{
	long long mid, p;
    while(r>=l)
    {
        mid=(l+r+1)/2;
        if(j==a[mid])
        {
            return mid;
        }
        else if(j<a[mid])
        {
            p=bs(a, l, mid-1, j);
            return p;
        }
        else if(j>a[mid])
        {
            p=bs(a, mid+1, r, j);
            return p;
        }
    }
    return -1;
}