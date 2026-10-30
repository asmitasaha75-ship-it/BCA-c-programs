//w.c.p to check whether a no. is prime or not using for loop.
#include<stdio.h>
int main()
{
	int num, i=2;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if(num%i==0){
			break;
		}
	}
 	if(num<=1){
		printf("Not a prime number");
	}
	else if(i==num){
		printf("prime number");
	}
	else{
		printf("Not a prime");
	}
	return 0;
}
		