#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	char a[10005];
	ll n, i, j, k, cnt;
	scanf("%s", a);
	n=strlen(a);
	cnt=n;
	for(i=1; i<n-1; i++)
	{
		//find number of palindrome centered at a[i]
		//odd length palindromes!
		j=i-1;
		k=i+1;
		while(j>=0 && k<=n-1)
		{
			if(a[j]==a[k])
			{
				cnt++;
				j--; k++;
			}
			else
			{
				break;
			}
		}
		
		//even length palindromes
		if(a[i]==a[i+1])
		{
			cnt++;
		}
		
		//palindromes centered at a[i] and a[i-1]
	/*	if(a[i]==a[i-1])
		{
			j=i-2;
			k=i+1;
			while(j>=0 && k<=n-1)
			{
				if(a[j]==a[k])
				{
					cnt++;
					j--; k++;
				}
				else
				{
					break;
				}
			}
		}
		*/
		//palindromes centered at a[i] and a[i+1]
		if(a[i]==a[i+1])
		{
			j=i-1;
			k=i+2;
			while(j>=0 && k<=n-1)
			{
				if(a[j]==a[k])
				{
					cnt++;
					j--; k++;
				}
				else
				{
					break;
				}
			}
		}
	}
	if(a[0]==a[1])
	{
		cnt++;
	}
	printf("%lld\n", cnt);
	return 0;
}