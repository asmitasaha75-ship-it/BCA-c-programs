#include <stdio.h>

int main() 
{
    int  i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    do {
        printf("%d ", i);
        i++; 
    } 
	while (i <= 10);
    printf("\n");

    return 0;
}
