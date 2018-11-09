#include <bits/stdc++.h>
using namespace std;
int poww(int a, int b);
int main() {
	int i, j;
	int a[20005];
	a[0]=0;
	a[1]=0;
	j=2;
	for(i=2; i<=20000; i++)
	{
		if(i<poww(2, j))
		{
			a[i]=j-1;
		}
		else
		{
			j++;
			a[i]=j-1;
		}
	}
	int n;
	scanf("%d", &n);
	while(n!=0)
	{
		printf("%d\n", a[n]);
		scanf("%d", &n);
	}
	return 0;
}
int poww(int a, int b)
{
	if(b==0)
	{
		return 1;
	}
	int temp=poww(2, b/2);
	if(b%2==0)
	{
		return temp*temp;
	}
	return temp*temp*a;
}