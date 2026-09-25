//w.a.c to display odd numbers from 1 to n
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n", i);
		i+=2;
	}
	return 0;
}