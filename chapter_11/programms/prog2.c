#include <stdio.h>

void find_closest_flight (int real_min, int *departure_time, int *arrival_time);



int main(void)
{
    int hour, min, real_min, depart_time, arr_time;
    
    printf ("Enter a 24-hour time: \n");
    scanf ("%d:%d", &hour, &min);
    real_min = 60 * hour + min;
    find_closest_flight (real_min, &depart_time, &arr_time);
    printf ("departure time: %d, arrival time: %d\n", depart_time, arr_time);
    return 0;
}

void find_closest_flight (int real_min, int *departure_time, int *arrival_time)
{
    if (real_min < 480){
        *departure_time = 480;
        *arrival_time = 676;
    }
    else if (real_min < 583){
        *departure_time = 583;
        *arrival_time = 712;
        }
    else if (real_min < 679){
        *departure_time = 679;
        *arrival_time = 811;
    }
    else if (real_min < 767){
        *departure_time = 767;
        *arrival_time = 900;
    }
    else if (real_min < 840){
        *departure_time = 840;
        *arrival_time = 968;
    }
    else if (real_min < 945){
        *departure_time = 945;
        *arrival_time = 1075;
    }
    else if (real_min < 1140){
        *departure_time = 1140;
        *arrival_time = 1280;
    }
    else if (real_min < 1305){
        *departure_time = 1305;
        *arrival_time = 1440;
    }
    else {
        *departure_time = 480;
        *arrival_time = 676;
    }
    return;
}