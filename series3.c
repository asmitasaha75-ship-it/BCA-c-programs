//2+5+8+11+14..upto n ters. wcp to calculate the sum of given numbers.
#include<stdio.h>
int main()
{
	int i=1,term=2,sum=0,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+3;
		i++;
    }
	 printf("sum of the given series is %d",sum);
	 return 0;
}
