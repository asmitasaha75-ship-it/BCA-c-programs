//1+11+111+1111..upto n ters. wcp to calculate the sum of given numbers.
#include<stdio.h>
int main()
{
	int i=1,n;
	long long term=1,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		term=(term*10)+1;
		i++;
    }
	 printf("sum of the given series is %lld",sum);
	 return 0;
}
