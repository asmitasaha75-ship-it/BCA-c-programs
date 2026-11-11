#include <stdio.h>

int main() 
{
    int n, i, j, space;
    
    printf("Enter the max number : ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) 
	{
        
        for (space = 1; space <= (n - i); space++)
	    {
            printf("  ");
        }
        
      
        for (j = n; j >= n - i + 1; j--)
	    {
            printf("%d ", j);
        }
       
        for (j = n - i + 2; j <= n; j++) 
		{
            printf("%d ", j);
        }
        
        printf("\n");
    }
    
    return 0;
}
