#include<stdio.h>
#include<map>

using namespace std;

int main()
{
	int n = 15;
	int input[100] ={-1,1,2,3,6,4,2,5,3,3,3,1,3,1,9,8};
	std::map<int,int> count;

	for (int i = 0;i<=n;i++)
	{
		count[i]=0;
		printf("\n%d] %d = %d",i,input[i],count[i]);
	}
	for (int i = 1;i<=n;i++)
	{
		count[input[i]]=count[input[i]]+1;
		printf("\n%d] %d = %d -> %d",i,input[i],count[input[i]],count[i]);
	}
	printf("\n");

	map<int,int>::iterator it ;
	for(it=count.begin();it!=count.end();it++)
	{
		if(it->second%2!=0)
		printf("\n %d -> %d",it->first,it->second);
	}
	
	return 0;
}
