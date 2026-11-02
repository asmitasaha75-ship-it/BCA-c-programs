//w.c.p to print a star pattern in square format.
#include<stdio.h>
int main()
{
	int i,j,size;
	printf("enter the size of the square:");
	scanf("%d",&size);
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
		  printf("*");	
		}
		printf("\n");
	}
	return 0;
}
