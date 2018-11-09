#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
std::string toBinary(int n);
int main() {
	ll T;
	scanf("%llu", &T);
	while(T--)
	{
		ll num, n, two=2, i, dig=0, j;
		scanf("%llu", &num);
		n=num;
		while(n>0)
		{
			if(n<two)
			{
				dig++;
				break;
			}
			n-=two;
			two*=2;
			dig++;
		}
		j=0;
		two=0;
		for(i=0; i<dig; i++)
		{
			j+=two;
			if(two==0)
			{
				two=2;
				continue;
			}
			two*=2;
		}
		j=num-j;
		j=j-1;
		
		std::string binary = toBinary(j);
		dig=dig-binary.size();
		for(i=0; i<dig; i++)
		{
			printf("5");
		}
		for(i=0; i<binary.size(); i++)
		{
			if(binary[i]=='1')
			{
				printf("6");
			}
			else
			{
				printf("5");
			}
		}
		printf("\n");
		
	}
	return 0;
}
std::string toBinary(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}