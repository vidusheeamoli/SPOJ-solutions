#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll p1(ll a, ll b)
{
ll t;
if(b==0)
{
return 1;	
}
t=p1(a, b/2);
if(b%2==0)
{
return (t*t)%10;
}
return (t*t*a)%10;
}
int main() {
ll T, a, b;
char as[1010];
cin>>T;
while(T--)
{
cin>>as>>b;
a=as[strlen(as)-1]-'0';
cout<<p1(a, b)<<"\n";
}
return 0;
}