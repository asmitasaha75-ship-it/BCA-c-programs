///1+2+4+7+11+..upto n terms. wcp to calculate the sum of given numbers.
#include<stdio.h>
int main()
{
	int i=1,term=1,diff=1,sum=0,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",term);
		sum=sum+term;
		term=term+diff;
		diff++;
		i++;
    }
	 printf("sum of the given series is %d",sum);
	 return 0;
}
