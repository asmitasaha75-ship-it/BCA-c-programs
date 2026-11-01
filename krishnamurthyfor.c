#include<stdio.h>
int main()
{
	int i,num,temp,rem,sum=0;
	printf("enter a number:");
	scanf("%d",&num);
	for(temp=num;temp>0;temp/=10)
	{
		rem=temp%10;
		long long fact=1;
	for( i=1;i<=rem;i++)
		{
			fact*=i;
		}
		sum+=fact;
	}
	if(sum==num){
		printf("%d is krishnamurthy number",num);
	}
	else{
		printf("%d is not krishnamurthy number",num);
	}
}
