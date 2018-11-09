#include <bits/stdc++.h>
using namespace std;

int main() {
	int check=0, i, j, k, len;
	char a[5010];
	while(check==0)
	{
		scanf("%s", a);
		if(a[0]=='0')
		{
			check=1;
			break;
		}
		len=strlen(a);
		long long arr[len+1];
		arr[0]=1;
		arr[1]=1;
		for(i=2; i<=len; i++)
		{
			if(a[i-1]=='0')
			{
				arr[i]=arr[i-2];
				continue;
			}
			if(a[i-1]<='9' && a[i-2]=='1')
			{
				arr[i]=arr[i-1]+arr[i-2];
				
			}
			else if(a[i-2]=='2' && a[i-1]<='6')
			{
				arr[i]=arr[i-1]+arr[i-2];
				
			}
			else 
			{
				arr[i]=arr[i-1];
				
			}
		}
		
	/*or(i=0; i<=len; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n"); */
		
		printf("%lld\n", arr[len]);
	}
	return 0;
}