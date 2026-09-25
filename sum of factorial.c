//w.a.c to find the sum of the following series(1!+3!+5!+...n!)
#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("enter the number of terms:");
    scanf("%d", &n);

    int i = 1;
	while(i <= n)
    {
        int fact = 1;
        int j = 1; 
        
		while(j <= i)
        {
            fact = fact * j;
            j++;
        }

        sum = sum + fact;
        i+=2;
    }

    printf("Sum of the series = %lld\n", sum);

    return 0;
}




 
 