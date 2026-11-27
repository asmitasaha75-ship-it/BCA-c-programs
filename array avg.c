#include<stdio.h>
int main()
{
int i,n;
float sum=0,avg;
printf("enter the number of element: ");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	sum=sum+a[i];
}
avg=sum/n;
 printf("the average is %.2f\n",avg);
 return 0;
}

	
