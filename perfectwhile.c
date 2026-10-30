//w.c.p to check whether a no. is perfect number using while 
#include<stdio.h>
int main()
{
	int num, i=1,sum=0;
	printf("enter the number:");
	scanf("%d",&num);
    while(i<num){
		if(num%i==0){
			sum=sum+i;
		}
		i++;
	}
 	if(sum==num){
		printf("perfect number");
	}
	else {
		printf("not a perfect number");
	}
	return 0;
}
		