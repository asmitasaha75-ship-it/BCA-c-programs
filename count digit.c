//w.c.p to count a digits of a whole number 
#include <stdio.h>
int main()
{
	int n,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("total digit is %d",count);
	return 0;
}

