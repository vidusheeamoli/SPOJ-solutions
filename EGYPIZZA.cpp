#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	char a[100];
	int n, count12=0, count14=0, count34=0, i, ans=1;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s", a);
		if(a[0]=='1' && a[2]=='2')
		{
			count12++;
		}
		else if(a[0]=='1' && a[2]=='4')
		{
			count14++;
		}
		else if(a[0]=='3')
		{
			count34++;
		}
	}
	ans+=count34;
	count14=count14-min(count34, count14);
	if(count12%2==0)
	{
		ans+=count12/2;
	}
	else
	{
		ans+=(count12-1)/2;
		ans++; 
		if(count14<=2)
		{
			count14=0;
		}
		else
		{
			count14-=2;
		}
	}
	//only count14 remaining       
	ans+=count14/4;                  
	if(count14%4!=0)
	{
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}