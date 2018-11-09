#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void swap(ll *a, ll *b)
{
	ll temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(void)
{
	ll n, T, i, j, c1, input;
	scanf("%lld", &T);
	while(T--)
	{
		c1=0;
		j=0;
		scanf("%lld", &n);
		ll a[n];
		for(i=0; i<n; i++)
		{
			scanf("%lld", &input);
			if(input==1)
			{
				c1++;
			}
			else
			{
				a[j++]=input;
			}
		}
	//	printf("%lld %lld \n", j, c);
		sort(a, a+j);
	/*	for(i=0; i<j-1; i++)
		{
			if(a[i]==2 && a[i+1]==3)
			{
				swap(&a[i], &a[i+1]);
			}
		} */
		for(i=0; i<c1; i++)
		{
			printf("1 ");
		}
		if(j==2 && a[0]==2 && a[1]==3)
		{
			printf("2 3 ");
		}
		else
		{
			for(i=j-1; i>=0; i--)
			{
				printf("%lld ", a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}