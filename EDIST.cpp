#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
int min(int a, int b, int c);
int main() {
	int T, i, j, k, len1, len2;
	char a[2010];
	char b[2010];
	scanf("%d", &T);
	while(T--)
	{
		scanf("%s %s", a, b);
		len1=strlen(a);
		len2=strlen(b);
		int arr[len2+1][len1+1]; //string 1 goes into the columns
		for(i=0; i<=len2; i++)
		{
			for(j=0; j<=len1; j++)
			{
				if(i==0)
				{
					arr[i][j]=j;
				}
				else if(j==0)
				{
					arr[i][j]=i;
				}
				else
				{
					if(a[j-1]==b[i-1])
					{
						arr[i][j]=arr[i-1][j-1];
					}
					else
					{
						arr[i][j]= (min(arr[i][j-1], arr[i-1][j], arr[i-1][j-1]) +1 ) ;
					}
				}
			}
		}
		printf("%d\n", arr[len2][len1]);
	}
	return 0;
}
int min(int a, int b, int c)
{
	int x;
	x=a;
	if(x>b)
	{
		x=b;
	}
	if(x>c)
	{
		x=c;
	}
	return x;
}