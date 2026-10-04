//w.c.p to accept a number and find the sum of its individual digits repeated till the result is a single digit.
#include<stdio.h>
int main()
{
	long long num;
	printf("enter a number:");
	scanf("%lld",&num);
	while(num>=10)
	{
		long long sum=0;
		while(num>0)
		{
			sum=sum+(num%10);
			num=num/10;
		}
		num=sum;
	}
	printf("single digit sum is %lld",num);
	return 0;
}
