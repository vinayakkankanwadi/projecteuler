#include<stdio.h>

long long routeCount(int m,int n)
{
	printf("\n%d %d",m,n);
	if(n==0 || m== 0)
		return 1;
	else
		return routeCount(m-1,n)+routeCount(m,n-1);
}

unsigned long long routeCountFast(int n)
{
	unsigned long long result = 1;
	for ( int i = 1;i<=n;i++)
	{
		result = result * (n+i)/i;	
	}
	return result;
}

int main()
{
	//printf("\n Routecount for 2*2 is %d",routeCount(2,2));
	//printf("\n Routecount for 20*20 is %ld",routeCount(20,20));
	printf("\n (%llu) Routecount for 20*20 is %ld",137846528820,routeCountFast(20));
	printf("\n Routecount for 20*20 is %llu",routeCountFast(20));
	return 0;
}
