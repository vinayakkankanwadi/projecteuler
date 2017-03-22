#include<stdio.h>

int main()
{
	int n = 20;
	int num = 1;

	for(int i = 1;i<=n;i++)
	{
		if(num%i)
		{
			num++;
			i=1;
		}
	}
	printf("\n%d",num);
	return 0;
}
