#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} dates;

int compare_dates (dates, dates);


int main() {

    dates d1, d2;
    int value;

    printf ("Enter first date: \n");
    scanf ("%d/%d/%d", &d1.day, &d1.month, &d1.year);
    printf ("Enter second date: \n");
    scanf ("%d/%d/%d", &d2.day, &d2.month, &d2.year);
    value = compare_dates(d1, d2);
    if (value == -1)
        printf ("First date is earlier\n");
    else if (value == 1)
        printf ("Second date is earlier\n");
    else 
        printf ("Dates are the same\n");
    return 0;
}
    
int compare_dates (dates d1, dates d2) {
    if (d1.year > d2.year) 
        return 1;
    else if (d2.year > d1.year) 
        return -1;
    else {
        if (d1.month > d2.month) 
            return 1;
        else if (d1.month < d2.month)
            return -1;
        else {
            if (d1.day > d2.day)
                return 1;
            else if (d1.day < d2.day)
                return -1;
            else return 0;
        }
    }
}