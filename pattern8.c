#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter the n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{   
	for(j=n;j>i;j--)
	{
		printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	   printf("%d",j);
    }
    	printf("\n");
	}
	return 0;
}
