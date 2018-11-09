#include <iostream>
using namespace std;
typedef long long ll;
inline ll gcd(ll a,ll b){ll t;while(b){a=a%b;t=a;a=b;b=t;}return a;}
int main()
{


	while(1)
	{
		ll n , k ;cin  >> n >> k;
		if ( n == -1 ) break;


		ll nn = ( k - 1 ) / 2;
		ll numer = nn * k - nn * (nn + 1) ;
		ll denom =( n * (n-1) ) / 2; 

		while(1)
		{
			ll g = gcd(numer,denom);
			if(g==1) break;
			numer /= g;
			denom /= g;
		}
		if ( numer == 0 ) cout << "0" << "\n";
		else if ( numer == denom ) 
			cout << "1" << "\n";
		else
			cout << numer << "/" << denom << "\n";
	}
	return 0;
}
