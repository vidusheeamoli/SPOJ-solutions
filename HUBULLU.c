#include <stdio.h>

int main(void) {
	long long t, a, b;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%d %d", &a, &b);
		if(b==0)
		{
			printf("Airborne wins.\n");
		}
		else
		{
			printf("Pagfloyd wins.\n");
		}
	}
	return 0;
}
