#include <stdio.h>
int main()
{
int i, j;
   for (i = 1; i <= 3; i++) 
   {
        for (j = 1; j <= 4 - i; j++) 
		{
            printf("  ");
        }
        for (j = 4; j >= 4 - i; j--)
		{
            printf("%d ", j);
        }
        for (j = 5 - i; j <= 4; j++)
	    {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (i = 2; i >= 0; i--) {
        for (j = 1; j <= 4 - i; j++) {
            printf("  ");
        }
        for (j = 4; j >= 4 - i; j--) {
            printf("%d ", j);
        }
        for (j = 5 - i; j <= 4; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
