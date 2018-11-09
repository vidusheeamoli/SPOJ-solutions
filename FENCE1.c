#include <stdio.h>
#include<math.h>
int main(void) {
	int check=0;
	float l, a, b;
	while(check==0)
	{
		scanf("%f", &l);
		if(l==0)
		{
			check=1;
			break;
		}
		b=(l*l)/6.28318;
		a=roundf(b * 100) / 100;
		printf("%.2f\n", a);
	}
	return 0;
}
