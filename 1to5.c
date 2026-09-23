#include<stdio.h>
int main()
{
    int i = 1;        
    int sum = 0;      

    // while loop condition
    while (i <= 5) {
        sum = sum + i;  
        i++;            
}

    printf("the sum of number from 1 to 5: %d\n", sum);

    return 0;
}

