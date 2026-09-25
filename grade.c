/*W.c.p to take input of marks of a student and display the according
to the following conditions:
if marks>=90,grade A if marks=>=75 grade B if marks=50 grade c
otherwise the student will considered as fail.*/
#include<stdio.h>
int main()
{
	int marks,grade;
	printf("enter the marks:");
	scanf("%d",&marks);
	if(marks>=90)
	{
		printf("grade=A");
    }	
	else if(marks>=75)
	{
	    printf("grade=B");
	}
	else if(marks>=60)
	{
	    printf("grade=C");
	}
	else
	{
		printf("fail");
	}
	return 0;
}