#include <stdio.h>

int main(void) {
	int N, a, c=1, d=0, e, f, h=0, g;
	while(c==1)
	{
		scanf("%d", &N);
		if(N!=-1)
		{
			int A[N];
			for(a=0; a<N; a++)
			{
				scanf("%d", &A[a]);
				d=d+A[a];
			}
			e=d%N;
			if(e==0)
			{
				f=d/N;
				for(a=0; a<N; a++)
				{
					if(A[a]>=f)
					{
						g=A[a]-f;
						h=h+g;
					}
				}
				printf("%d\n", h);
			}
			else
			{
				printf("-1\n");
			}
			d=0;
			h=0;
		}
		else
		{
			c=0;
		}
		
	}
	return 0;
}
