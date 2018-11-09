#include <stdio.h>
typedef unsigned long long llu;
void merge(llu a[], llu l, llu m, llu r);
void ms(llu a[], llu l, llu r);
int main(void) {
	unsigned long long check, i, j, n, ans;
	check=0;
	while(check==0)
	{
		scanf("%llu", &n);
		if(n==0)
		{
			check=1;
			break;
		}
		unsigned long long a[n];
		unsigned long long b[n];
		for(i=0; i<n; i++)
		{
			scanf("%llu", &a[i]);
		}
		for(i=0; i<n; i++)
		{
			scanf("%llu", &b[i]);
		}
		//sorting the arrays
		ms(a, 0, n-1);
		ms(b, 0, n-1);
		//sorting over
		ans=0;
		for(i=0; i<n; i++)
		{
			ans=ans+(a[i]*b[n-i-1]);
		}
		printf("%llu\n", ans);
	}
	return 0;
}

void ms(llu a[], llu l, llu r)
{
	llu m;
	if(l<r)
	{
		m=(l+r)/2;
		ms(a, l, m);
		ms(a, m+1, r);
		merge(a, l, m, r);
	}
}
void merge(llu a[], llu l, llu m, llu r)
{
	llu i, j, k, n1, n2; 
	n1=m-l+1;
	n2=r-m;
	llu left[n1];
	llu right[n2];
	for(i=0; i<n1; i++)
	{
		left[i]=a[l+i];
	}
	for(i=0; i<n2; i++)
	{
		right[i]=a[m+1+i];
	}
	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2)
	{
		if(left[i]<=right[j])
		{
			a[k]=left[i];
			i++;
		}
		else
		{
			a[k]=right[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=left[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=right[j];
		j++;
		k++;
	}
}







