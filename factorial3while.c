#include<stdio.h>
int main()
{
	int n,i=1;
	long long fact =1;
	double sum=0.0;
	printf("enter the number of terms:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact*=i;
		double term =(double)fact/(2.0*i);
		sum+=term;
		i++;
	}
	printf("sum of the series upto %d terms=%.4lf\n",n,sum);
	return 0;
}
