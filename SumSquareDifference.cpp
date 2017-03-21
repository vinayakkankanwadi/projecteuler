#include<stdio.h>

int main()
{
	int n=100;
	int sumSquare = 0;
	int squareSum = 0;

	for(int i=1;i<=n;i++)
	{
		sumSquare = sumSquare+i*i;
		squareSum = squareSum+i;
	}
	squareSum=squareSum*squareSum;
	int diff = squareSum-sumSquare;
	printf("\nDiff= %d ",diff);
}
