#include <bits/stdc++.h>
using namespace std;

int main() {
	char a[100005];
	while(scanf("%s", a)!=EOF)
	{
		int len, i, j, count, x; 
		len=strlen(a);
		for(i=0; i<len; )
		{
			count=0;
			j=i;
			while(a[i]==a[j])
			{
				count++;
				j++;
			}
			if(count<=3)
			{
				for(x=0; x<count; x++)
				{
					printf("%c", a[i]);
				}
			}
			else
			{
				printf("%d!%c", count, a[i]);
			}
			i=j;
		}
		printf("\n");
	}
	return 0;
}