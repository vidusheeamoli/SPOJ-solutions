#include <stdio.h>
int max(int a, int b);
int main(void) {
	int check, n, wt, i, j, k, weight, temp;
	check=0;
	while(check==0)
	{
		scanf("%d %d", &wt, &n);
		if(wt==0 && n==0)
		{
			check=1;
			break;
		}
		int w[n];
		int value[n];
		for(i=0; i<n; i++)
		{
			scanf("%d %d", &w[i], &value[i]);
		}
		int knap[n+1][wt+1];
		for(i=0; i<=n; i++)
		{
			for(j=0; j<=wt; j++)
			{
				if(i==0 || j==0)
				{
					knap[i][j]=0;
				}
				else if(w[i-1]<=j) //DO NOT FORGET
				{
					knap[i][j]=max(value[i-1]+knap[i-1][j-w[i-1]], knap[i-1][j]);
				}
				else
				{
					knap[i][j]=knap[i-1][j];
				}
			}
		}
		//CALCULATING WEIGHT OF THE OPTIMAL SUBSET
		i=n;
		j=wt;
		weight=1;
		for(i=1; i<=wt; ++i)
		{
			if(knap[n][i]==knap[n][wt])
			{
				weight=i;
				break;
			}
		}
	/*	while(i>0 && j>0)
		{
			if(knap[i][j]!=knap[i-1][j])
			{
				i=i-1;
				temp=knap[i][j];
				for(k=0; k<=wt; k++)
				{
					if(temp==knap[i][k])
					{
						j=k;
						
					}
				}
				weight=weight+w[i];
			}
			else
			{
				i--;
			}
		} */
		printf("%d %d \n", weight, knap[n][wt]);
	}
	return 0;
}
int max(int a, int b)
{
	if(a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}
}