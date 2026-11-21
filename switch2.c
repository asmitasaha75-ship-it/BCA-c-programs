/*wap to calculate grades from the marks (0<=marks<=100) of a subject.
Grading schemes :- 80-100 (A)
                   60-79 (B)
                   50-59 (C)
                   40-49 (D)
                   0-39 (F)
Solve this using switch case.
*/
#include <stdio.h>

int main(){
    int marks;
    char grade;

    printf("Enter the marks: ");
    scanf("%d",&marks);

    if(marks<0 || marks>100){
        printf("Invalid Input\n");
        return 0;
    }

    switch(marks/10){
        case 10:
        case 9:
        case 8:
            grade='A';
            break;

        case 7:
        case 6:
            grade='B';
            break;

        case 5:
            grade='C';
            break;

        case 4:
            grade='D';
            break;

        default:
            grade='F';
    }

    printf("Your grade is: %c\n",grade);

    return 0;
}
