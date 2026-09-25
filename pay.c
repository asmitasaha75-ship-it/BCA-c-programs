/*W.c.p to find the net payble amount applying a discount.
if the purchase amount >=10000 the customers will gets a dicount
of 10% otherwise they will get discount  of 5% */
#include<stdio.h>
int main()
{
	int purchase_amount,discount;
	float net_pay;
	printf("enter the purchase amount:");
	scanf("%d",&purchase_amount);
	if(purchase_amount>=10000)
	{
	 discount=purchase_amount*0.1;
    }	
	else
	{
	 discount=purchase_amount*0.5;
	}
	net_pay=purchase_amount-discount;
	printf("net pay is %.2f",net_pay);
	
	return 0;
}