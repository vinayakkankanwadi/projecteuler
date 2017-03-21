#include <stdio.h>

bool IsPrime(int n)
{
	for(int i = 2;i<n;i++)
	{
		if( n%i == 0 )
			return false;
	}
	return true;
}

int main()
{

	//int n = 13195 ;
	long long n = 600851475143 ;
	for ( int i = 2;i< n;i++)
	{
		if( IsPrime(i) )
		{
			if( n%i == 0)
			{
				n=n/i;
				printf("\n%ld %ld",i,n);
				i--;
			}
		}
	}
	printf("\nLargest=%d",n);
	return 0;
}
