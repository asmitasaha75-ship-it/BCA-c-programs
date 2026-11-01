#include<stdio.h>
int main()
{
	int num, original_num,rem, result=0;
	printf("enter an integer:");
    scanf("%d",&num);
	original_num= num;
	while(original_num!=0)
	{
		rem=original_num%10;
		result+= rem*rem*rem;
		original_num/=10;
	}
	if(result==num)
	{
		printf("%d is an armstrong number.\n",num);
	}
	else 
	{
		printf("%d is not an armstrong number.\n",num);
	}
	return 0;	
}
