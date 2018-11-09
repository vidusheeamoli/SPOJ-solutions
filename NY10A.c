#include <stdio.h>

int main(void) {
	int test, a, b, i, x;
	char c[40];
	scanf("%d", &test);
	while(test--)
	{
		int d[8]={0};
		scanf("%d", &a);
		scanf("%s", c);
		for(i=0; i<40; i++)
		{
			if(c[i]=='H')
			{
				c[i]='1';
			}
			else
			{
				c[i]='0';
			}
		}
		for(i=0; i<38; i++)
		{
			x=(c[i]-'0')*100+(c[i+1]-'0')*10+(c[i+2]-'0');
			switch(x)
			{
				case 0:
				d[0]=d[0]+1;
				break;
				case 1:
				d[1]=d[1]+1;
				break;
				case 10:
				d[2]=d[2]+1;
				break;
				case 11:
				d[3]=d[3]+1;
				break;
				case 100:
				d[4]=d[4]+1;
				break;
				case 101:
				d[5]=d[5]+1;
				break;
				case 110:
				d[6]=d[6]+1;
				break;
				case 111:
				d[7]=d[7]+1;
				break;
			}
		}
		printf("%d ", a);
		for(i=0; i<8; i++)
		{
			printf("%d ", d[i]);
		}
		printf("\n");
		
	}
	return 0;
}
