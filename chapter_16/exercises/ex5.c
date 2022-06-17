#include <stdio.h>

struct date {
    int month, day, year;
};
int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main() {
    struct date d1 = {6, 7, 1996}, d2 = {6, 7, 1996};
    printf ("%d\n", day_of_year(d1));
    printf ("%d\n", compare_dates(d1, d2));
    return 0;
}

int day_of_year (struct date d) {
    return d.day;
}

int compare_dates (struct date d1, struct date d2) {
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