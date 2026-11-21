#include <stdio.h>

int main() {
    int day, month, year;
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    int dayOfWeek;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    int y = year;
    if (month < 3) {
        y = y - 1;
    }

    int total = y + (y / 4) - (y / 100) + (y / 400) + t[month - 1] + day;
    dayOfWeek = total % 7;

    switch (dayOfWeek) {
        case 0:
            printf("Day of the week: Sunday\n");
            break;
        case 1:
            printf("Day of the week: Monday\n");
            break;
        case 2:
            printf("Day of the week: Tuesday\n");
            break;
        case 3:
            printf("Day of the week: Wednesday\n");
            break;
        case 4:
            printf("Day of the week: Thursday\n");
            break;
        case 5:
            printf("Day of the week: Friday\n");
            break;
        case 6:
            printf("Day of the week: Saturday\n");
            break;
        default:
            printf("Invalid date!\n");
            break;
    }

    return 0;
}
