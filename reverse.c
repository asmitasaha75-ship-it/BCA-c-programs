//w.c.p to reverse the digits of a number .
#include<stdio.h>
int main()
{
	int n,rem;
	long long rev=0;
	printf("enter an integer:");
	scanf("%d",&n);
	while(n!=0)	
		{
			rem=n%10;
			rev=(rev*10)+rem;
			n=n/10;
		}
	printf("reversed number is %lld",rev);
	return 0;
}
