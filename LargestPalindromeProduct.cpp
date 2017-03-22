#include <stdio.h>

int Reverse(long n)
{
	long rev = 0;
	while(n>0)
	{
		rev = rev*10 +n%10;
		n = (n -n%10)/10;
	}
	return rev;
}

int main()
{

	int p1 = 999;
	int p2 = 999;
	int rev = 0;
	long prod = 0;
	int change = 0;
	long pal = 0;

	for (int i = p1;i>1;i--)
	{
	for(int j= p2;j>1;j--)
	{
		prod = i*j;
		rev = Reverse(prod);
//		printf("\n %d * %d = %ld  <-> %d",i,j,prod,rev);
		if( prod == rev)
		{
			printf("\n %d %d",prod,rev);
			if( pal < prod)
				pal = prod;
		}

	}
	}
	printf("\n Pal=%ld",pal);

	return 0;
}
