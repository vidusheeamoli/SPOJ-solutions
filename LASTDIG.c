#include <stdio.h>

int main(void) {
int t, a, i, x, y, b;
scanf("%d", &t);
for(i=0; i<t; i++)
{
scanf("%d", &a);
scanf("%d", &b);
x=a%10;
if(b==0)
{
printf("1\n");
}else{if(x==1 || x==5 || x==0 || x==6){printf("%d\n", x);
}else if(x==4 || x==9){if(b%2==0){y=(x*x)%10;printf("%d\n", y);}else{printf("%d\n", x);}}else
{if(b%4==1)
{printf("%d\n", x);}if(b%4==0){y=(x*x*x*x)%10;printf("%d\n", y);
}if(b%4==2){y=(x*x)%10;
	printf("%d\n", y);}if(b%4==3){y=(x*x*x)%10;printf("%d\n", y);}}}}return 0;}
