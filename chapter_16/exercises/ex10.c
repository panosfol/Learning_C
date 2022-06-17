#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct point {int x, y; };
struct rectangle {struct point upper_left, lower_right; };
int area (struct rectangle);
struct point center(struct rectangle);
struct rectangle move(struct rectangle, int, int);

int main() {
    return 0;
}

int area (struct rectangle r) {
    int s1, s2, area;
    s1 = r.lower_right.x - r.upper_left.x;
    s2 = r.upper_left.y - r.lower_right.y;
    return area = s1 * s2;
}

struct point center (struct rectangle r) {
    int s1, s2;
    struct point p;
    s1 = (r.lower_right.x + r.upper_left.x) / 2;
    s2 = (r.lower_right.y + r.upper_left.y) / 2;
    p.x = s1;
    p.y = s2;
    return p;
}

struct rectangle move(struct rectangle r, int x, int y) {
    r.upper_left.x += x;
    r.upper_left.y += y;
    r.lower_right.x += x;
    r.lower_right.y +=y;
    return r;
}

bool lies_within (struct rectangle r, struct point p) {
    if (p.x > r.lower_right.x || p.x < r.upper_left.x)
        return false;
    if (p.y > r.upper_left.y || p.y < r.lower_right.y)
        return false;
    return true;
}


