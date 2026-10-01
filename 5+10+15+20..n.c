//5+10+15+20+..upto n ters. wcp to calculate the sum of given numbers.
#include<stdio.h>
int main()
{
	int i=1,term=5,sum=0,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+5;
		i++;
    }
	 printf("sum of the given series is %d",sum);
	 return 0;
}
