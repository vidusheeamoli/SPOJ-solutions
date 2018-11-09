#include <bits/stdc++.h>
using namespace std;

int main() {
	char a[1005];
	int i, j, len;
	while(scanf("%s", a)!=EOF)
	{
		int count=0;
		int count1=0;
		len=strlen(a);
		if(len==1)
		{
			printf("0\n");
			continue;
		}
		for(i=0; i<len; i++) //first alphabet is in upper case COUNT
		{
			if(i%2==1)
			{
				if(a[i]>=65 && a[i]<=90)
				{
					count++;
				}
				
			}
			else
			{
				if(a[i]>=97 && a[i]<=122)
				{
					count++;
				}
			}
		}
		for(i=0; i<len; i++) //first alphabet is in upper case COUNT1
		{
			if(i%2==1)
			{
				if(a[i]>=97 && a[i]<=122)
				{
					count1++;
				}
				
			}
			else
			{
				if(a[i]>=65 && a[i]<=90)
				{
					count1++;
				}
			}
		}
		
		printf("%d\n", min(count, count1));
	}
	return 0;
}