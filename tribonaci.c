// wcp to display the tribonacci series.
#include<stdio.h>
int main()
{
	int i=1,n;
	long long a1=0,a2=0,a3=1,c;
	printf("enter the value of n(n>0):");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%lld",a1);
	    c=a1+a2+a3;
		a1=a2;
		a2=a3;
		a3=c;
		i++;
    }
       printf("\n");
	 return 0;
}
