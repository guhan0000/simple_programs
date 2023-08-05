#include <stdio.h>
#include <string.h>

int main() {
    int i;
    int day, month, total_days = 0;
    char month_str[10];
    printf("Enter the date (dd month): ");
    scanf("%d %s", &day, month_str);

    if (strcmp(month_str, "Jan") == 0) {
        month = 1;
    } else if (strcmp(month_str, "Feb") == 0) {
        month = 2;
    } else if (strcmp(month_str, "Mar") == 0) {
        month = 3;
    } else if (strcmp(month_str, "Apr") == 0) {
        month = 4;
    } else if (strcmp(month_str, "May") == 0) {
        month = 5;
    } else if (strcmp(month_str, "Jun") == 0) {
        month = 6;
    } else if (strcmp(month_str, "Jul") == 0) {
        month = 7;
    } else if (strcmp(month_str, "Aug") == 0) {
        month = 8;
    } else if (strcmp(month_str, "Sep") == 0) {
        month = 9;
    } else if (strcmp(month_str, "Oct") == 0) {
        month = 10;
    } else if (strcmp(month_str, "Nov") == 0) {
        month = 11;
    } else if (strcmp(month_str, "Dec") == 0) {
        month = 12;
    } else {
        printf("Invalid Month\n");
        return 0;
    }

    for (i = 1; i < month; i++) {
        if (i == 2) {
            total_days += 28;
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            total_days += 30;
        } else {
            total_days += 31;
        }
    }

    total_days += day;
    printf("%d Days\n", total_days);
    return 0;
}
