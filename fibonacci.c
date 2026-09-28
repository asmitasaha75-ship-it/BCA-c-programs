//0,1,1,2,3,5,8..upto n terms. wcp to display the given series.
#include<stdio.h>
int main()
{
	int i=1,a1=0,a2=1,c,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d,",a1);
	    c=a1+a2;
		a1=a2;
		a2=c;
		i++;
    }
	 return 0;
}
