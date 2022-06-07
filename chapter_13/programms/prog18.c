#include <stdio.h>
#include <string.h>

int main (void) {
    int month, day, year;
    char *month_array[] = {"January", "February", "March", "April", "May", "June",
                     "July", "August", "September", "October", "November", "December"};
    char date[100], day_str[3], year_str[5];

    printf ("Enter a day (mm/dd/yyyy): \n");
    scanf ("%2d/%2d/%4d", &month, &day, &year);
    sprintf (day_str, "%d", day);
    sprintf (year_str, "%d", year);
    strcpy (date, month_array[month - 1]);
    strcat (date, " ");
    strcat (date, day_str);
    strcat (date, ", ");
    strcat (date, year_str);
    printf ("%s\n", date);
    return 0;
}
