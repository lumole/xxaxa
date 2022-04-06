#include<stdio.h>

#define N 1000

int num[N+1];
int Prime[N+1];

void prt(int n)
{
	int  i;
	
	for(i=0; i < n; i++)
	{
		printf("%d%c", Prime[n-i-1], (i+1)%10?' ':'\n');
	}
	
}

int main()
{	
	int n=0, i, count=0;
	
	scanf("%d", &n);
	
	for(i=2; i <= n; i++)
	{
		if(!num[i])
		{
			for(int j=2; j*i<=n; j++)
			{
				num[i*j] = 1;
			}
			Prime[count++] = i;
		}
	}
	
	prt(count);


	return 0;
}
