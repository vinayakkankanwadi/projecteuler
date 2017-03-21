#include<stdio.h>

bool prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if( (n%i) == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n=10001;
	int pc = 0;
	printf("\n %d Primes ",n);
	for(int i=1;pc<=n;i++)
	{
		if( prime(i))
		{
			printf(" %d ",i);
			pc++;
		}
	}
}
