#include<stdio.h>
int main()
{
	float hra,da,tax,b_sal,n_sal;
	printf("enter basic salary:");
	scanf("%f",&b_sal);
	hra=(b_sal*0.10);
	da=(b_sal*0.05);
	if(b_sal>=20000)
	{
		tax=(b_sal*0.10);
	}
	else
	{
		tax=(b_sal*0.07);
	}
	n_sal=(b_sal+hra+da-tax);
	printf("basic salary is %.2f\n",b_sal);
	printf("HRA is %.2f\n",hra);
	printf(" DA is %.2f\n",da);
	printf("net salary is %.2f\n",n_sal);
	return 0;
	
}
