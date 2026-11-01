#include<stdio.h>
int main()
{
	int i=1,num,temp,rem,sum=0;
	printf("enter a number:");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		rem=temp%10;
		long long fact=1;
		while(i<=rem)
		{
			fact*=1;
			i++;
		}
		sum+=fact;
		temp/=10;
	}
	if(sum==num){
		printf("%d is krishnamurthy number",num);
	}
	else{
		printf("%d is not krishnamurthy number",num);
	}
}
