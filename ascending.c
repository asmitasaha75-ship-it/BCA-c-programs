#include <stdio.h>

int main()
 {
    int x, y, z;

    printf("Enter no. \n");
    scanf("%d %d %d", &x, &y, &z);

    printf("-------------------------\n");
    printf("Entered no. %d %d %d\n", x, y, z);

    if (x <= y && y <= z) {
        printf("sorted no.%d %d %d\n", x, y, z);
    } 
    else if (y <= x && x <= z) {
        printf("sorted no.%d %d %d\n", y, x, z);
    } 
    else if (y <= z && z <= x) {
        printf("sorted no.%d %d %d\n", y, z, x);
    } 
    else if (z <= y && y <= x) {
        printf("sorted no.%d %d %d\n", z, y, x);
    } 
    else if (z <= x && x <= y) {
        printf("sorted no.%d %d %d\n", z, x, y);
    } 
    else if (x <= z && z <= y) {
        printf("sorted no.%d %d %d\n", x, z, y);
    }

    return 0;
}
