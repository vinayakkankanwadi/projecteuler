#include<stdio.h>

int main()
{
   int a[] =  {-2, -3, 4, -1, -2, 1, 5, -3};
   int n = sizeof(a)/sizeof(a[0]);	

  int oldSum = a[0];
  int newSum = a[0];

  for(int i=1;i<n;i++)
  {
	newSum = newSum +a[i];
	if(oldSum < newSum)
		oldSum = newSum;
	if(newSum<0)
		newSum = 0;
  }
  printf("\nSum%d",oldSum);
}
