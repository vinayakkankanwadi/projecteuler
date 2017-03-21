#include<stdio.h>

int main()
{
	long n1=1;
	long n2=2;
	long n=4000000;
	long sum = n2;
	printf("\n%ld ",n1);
	printf("\n%ld ",n2);
	for (int i=2;i<n;i++)
	{
		long newN = n1+n2;
		if( newN > 4000000)
			break;
		if( (newN%2) == 0)
			sum = sum + newN;
		printf("\n%ld ",newN);
		n1= n2;
		n2=newN;
	}
	printf("\nSum=%ld",sum);
}
