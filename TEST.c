#include <stdio.h>

int main(void) {
int a;
do
{
	scanf("%d", &a);
	if(a!=42)
	{
		printf("\n %d", a);
	}
	else
	{
		break;
	}
	
} while(1);	
return 0;
}
