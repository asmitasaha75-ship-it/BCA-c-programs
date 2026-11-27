//w.c.p to find the largest number within an array.
#include<stdio.h>
int main()
{
int i,n,max;
printf("enter the number of element: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	int a[n];
	max=a[0];
	printf("enter the elements:");
	scanf("%d",&a[i]);
	if(a[i]>max)
	{
		max=a[i];
	}
}
 printf("the largest number is %d\n",max);
 return 0;
}

	
