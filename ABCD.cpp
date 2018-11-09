#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	char a[1000005];
	char b[1000005];
	int i, j, n, len;
	char temp;
	scanf("%d", &n);
	scanf("%s", a);
	len=strlen(a);
	for(i=0; i<len-1; i++)
	{
		if((a[i]=='A' && a[i+1]=='B') || (a[i]=='B' && a[i+1]=='A'))
		{
			b[i]='C';
			b[i+1]='D';
		}
		if((a[i]=='A' && a[i+1]=='C') || (a[i]=='C' && a[i+1]=='A'))
		{
			b[i]='B';
			b[i+1]='D';
		}
		if((a[i]=='A' && a[i+1]=='D') || (a[i]=='D' && a[i+1]=='A'))
		{
			b[i]='C';
			b[i+1]='B';
		}
		if((a[i]=='B' && a[i+1]=='C') || (a[i]=='C' && a[i+1]=='B'))
		{
			b[i]='A';
			b[i+1]='D';
		}
		if((a[i]=='B' && a[i+1]=='D') || (a[i]=='D' && a[i+1]=='B'))
		{
			b[i]='A';
			b[i+1]='C';
		}
		if((a[i]=='C' && a[i+1]=='D') || (a[i]=='D' && a[i+1]=='C'))
		{
			b[i]='A';
			b[i+1]='B';
		}
		i++;
	}
	for(i=0; i<len-1; i++)
	{
		if(b[i]==b[i+1])
		{
			temp=b[i+1];
			b[i+1]=b[i+2];
			b[i+2]=temp;
		}
	}
	printf("%s\n", b);
	return 0;
}