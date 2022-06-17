#include <stdio.h>

struct time {
    int hours, minutes, seconds;
};
struct time split_time (long total_seconds);

int main() {
    struct time p;
    long total_seconds;
    scanf ("%ld", &total_seconds);
    p = split_time (total_seconds);
    printf ("%d, %d, %d\n", p.hours, p.minutes, p.seconds);
    return 0;
}

struct time split_time (long total_seconds) {
    struct time temp;

    temp.hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600;
    temp.minutes = total_seconds / 60;
    total_seconds = total_seconds % 60;
    temp.seconds = total_seconds;
    return temp;
}

