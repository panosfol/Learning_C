#include <stdio.h>

struct time {
    int depart_time;
    int arr_time;
};

struct time flights[] = {{480, 676},
                          {583, 713},
                          {679, 811},
                          {767, 900},
                          {840, 968},
                          {945, 1075},
                          {1140, 1280},
                          {1305, 1440}};

int main(void)
{
    int hour, min, real_min, i;
    
    printf ("Enter a 24-hour time: \n");
    scanf ("%d:%d", &hour, &min);
    real_min = 60 * hour + min;
    for (i = 0; i < 8; i++) {
        if (real_min < flights[i].depart_time) {
            break;
        }
    }
    if (i == 8) 
        printf ("departure time: %d, arrival time: %d\n", flights[0].depart_time, flights[0].arr_time);
    else
        printf ("departure time: %d, arrival time: %d\n", flights[i].depart_time, flights[i].arr_time);
    return 0;
}
