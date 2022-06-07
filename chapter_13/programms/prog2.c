#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line (char str[], int n);

int main(void)
{
    char reminders [MAX_REMIND][MSG_LEN + 3];
    char day_str[20], msg_str[MSG_LEN + 1], hour_str[20], min_str[20], month_str[50];
    int day, i , j, num_remind = 0, hour, min, month;
    
    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf ("-- No space left --\n");
            break;
        }
        printf ("Enter day and reminder: ");
        scanf ("%2d/%2d", &month, &day);
        if (day >= 0 && day < 32) {
            if (month == 0)
                break;
            sprintf (month_str, "%2d", month);
            sprintf (day_str, "%2d", day);
            scanf ("%d:%d", &hour, &min);
            sprintf (hour_str, "%2d", hour);
            sprintf (min_str, "%2d", min);
            read_line (msg_str, MSG_LEN);
            strcat (hour_str, ":");
            strcat (day_str, " ");
            strcat (month_str, " ");
            strcat (month_str, (strcat (day_str, (strcat (hour_str, min_str)))));
        
            for (i = 0; i < num_remind; i++)
                if (strcmp (day_str, reminders [i]) < 0)
                    break;
            for (j = num_remind; j > i; j--)
                strcpy(reminders[j], reminders [j - 1]);
            
            strcpy (reminders [i], month_str);
            strcat (reminders [i], msg_str);
        
            num_remind++;
        }
        else {
            printf ("Error\n");
            read_line (msg_str, MSG_LEN);
        }
    }
    printf ("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf (" %s\n", reminders [i]);
        
    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;
    
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}