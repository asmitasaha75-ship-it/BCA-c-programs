//w.c.p to check whether a no. is prime or not first using while loop then using for loop.
#include<stdio.h>
int main()
{
	int num, i=2;
	printf("enter the number:");
	scanf("%d",&num);
	while(i<num){
		if(num%i==0){
			break;
		}
		i++;
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
		