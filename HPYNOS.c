#include<stdio.h>
long long sum(long long b);
int main(void)
{

long long a, b, c, d, e, n, x, f;
f=1;
scanf("%lld", &n);
b=n;
c=0;

while(b!=1)
{
b=sum(b);
if(b==4)
{
f=0;
break;
}
c=c+1;
}
if(f==1)
printf("%lld\n", c);
else
printf("-1\n");

return 0;

}
long long sum(long long b)
{
long long a, p, c, d;
p=0;
d=0;
a=b;
while(a>0)
{
p=p+1;
c=a%10;
d=d+(c*c);
a=a/10;
}
return d;
}