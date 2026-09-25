/*write a c program to calculate the electic bill based on the number of unit consume the charges are 
0-100 -> rs.2 per unit 
101-200 -> rs.3 per unit 
201-300 -> rs.5 per unit
above 300 units -> rs.7 per unit */

#include <stdio.h>

int main() {
    float units, total_bill = 0;

    // Prompt the user to enter the number of units consumed
    printf("Enter the total units consumed: ");
    if (scanf("%f", &units) != 1 || units < 0) {
        printf("Invalid input. Please enter a valid positive number.\n");
        return 1;
    }

    // Calculate bill based on tiered slabs
    if (units <= 100) {
        total_bill = units * 2;
    } 
    else if (units <= 200) {
        total_bill = (100 * 2) + ((units - 100) * 3);
    } 
    else if (units <= 300) {
        total_bill = (100 * 2) + (100 * 3) + ((units - 200) * 5);
    } 
    else {
        total_bill = (100 * 2) + (100 * 3) + (100 * 5) + ((units - 300) * 7);
    }

    // Print the final calculated bill
    printf("Total Electricity Bill: Rs. %.2f\n", total_bill);

    return 0;
}


