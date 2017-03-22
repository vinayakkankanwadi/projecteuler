#include<stdio.h>

int main()
{

	int s=1000;
	for (int a = 3;a<=(s-3)/3;a++)
	{
		for(int b=a+1;b<=(s-1-a);b++)
		{
			int c= s-a-b;
			if( c*c == a*a+b*b)
				printf("\na=%d, b=%d, c=%d = %ld",a,b,c,a*b*c);
		}
	}
	return 0;
}
