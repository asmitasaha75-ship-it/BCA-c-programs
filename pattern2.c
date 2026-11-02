/*w.c.p to print the following pattern 
12345
1234
123
12
1*/

#include<stdio.h>
int main()
{
	int i,j,row;
	printf("enter the number of rows:");
	scanf("%d",&row);
	for(i=row;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		  printf("%d",j);	
		}
		printf("\n");
	}
	return 0;
}
