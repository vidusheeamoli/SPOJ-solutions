#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void swap(int *x, int *y);
int main() {
	ll T;
	scanf("%lld", &T);
	while(T--)
	{
		bool check=false;
		ll n, i, j, mini, minindex;
		scanf("%lld", &n);
		int a[n];
		for(i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
		}
		for(i=n-1; i>=0; i--)
		{
			j=i-1;
			if(j>=0)
			{
				if(a[j]<a[i])
				{
					check=true;
					break;
				}
			}
			else
			{
				check=false;
				break;
			}
		}
		if(!check)
		{
			printf("-1\n");
			continue;
		}
		mini=100;
		for(i=n-1; i>=j; i--)
		{
			if(a[i] > a[j])
			{
				if(a[i] < mini)
				{
					mini=a[i];
					minindex=i;
				}
			}
		}
		swap(a[j], a[minindex]);
		sort(a+(j+1), a+n);
		for(i=0; i<n; i++)
		{
			printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}