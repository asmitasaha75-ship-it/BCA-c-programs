//w.c.p to take a input as an array and display into the screen.
#include<stdio.h>
int main()
{
	int i,a[5];
	for(i=0;i<=5;i++)
	{
    printf("enter the value:");
	scanf("%d",&a[i]);
    }
	for(i=0;i<=5;i++)
	{
	printf("%d ",a[i]);
    }
    return 0;
}
//int i,n;
//printf("enter the no. of elements:");
//scanf("%d",&n);
//int a[n];
//printf("enter %d elememts:",n);
//for(i=0;i<=n;i++)
//	{
//	scanf("%d",&a[i]);
//  }
//for(i=0;i<=n;i++)
//	{
//	printf("%d",a[i]);
//  }

