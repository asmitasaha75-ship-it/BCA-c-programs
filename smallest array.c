//w.c.p to find the largest number within an array.
#include<stdio.h>
int main()
{
int i,n,min;
printf("enter the number of element: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	int a[n];
	min=a[0];
	printf("enter the elements:");
	scanf("%d",&a[i]);
	if(a[i]<min)
	{
		min=a[i];
	}
}
 printf("the smallest number is %d\n",min);
 return 0;
}

	
