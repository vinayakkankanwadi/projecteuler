#include<stdio.h>
#include<stdlib.h>

int main()
{

	int n = 1000;
	int x = 3;
	int y = 5;
	int sum = 0;
	printf("\n");

	for (int i = 1;i<n;i++)
	{
		if( (i%x==0) || (i%y) == 0)
		{
			sum = sum +i;
			printf(" %d",i);
		}
	}
	printf("\nSum of %d and %d till %d is %d",x,y,n,sum);
}
	
