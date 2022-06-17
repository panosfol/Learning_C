#include <stdio.h>
#include <stdbool.h>

struct color make_color(int, int ,int);
int getRed (struct color);
bool equal_color (struct color, struct color);
struct color brighter (struct color);
struct color darker (struct color);

struct color {
    int red;
    int green;
    int blue;
};

int main () {
    struct color cf1 = make_color(360 , 15 , -14), cf2 = {255, 15, 0}, cf4 = {15, 24, 100}, cf5 = {15, 52, 123};
    printf ("f1 = %d, %d, %d\n", cf1.red, cf1.green, cf1.blue);
    printf ("f2 = %d\n",getRed (cf2));
    printf ("f3 = %d\n", equal_color(cf1, cf2));
    cf4 = brighter(cf4);
    printf ("f4 = %d, %d, %d\n", cf4.red, cf4.green, cf4.blue);
    cf5 = darker(cf5);
    printf ("f5 = %d, %d, %d\n", cf5.red, cf5.green, cf5.blue);
    return 0;
}

struct color make_color (int red, int green, int blue) {
    struct color c;
    if (red > 255) 
        c.red = 255;
    else if (red < 0)
        c.red = 0;
    else c.red = red;
    if (green > 255) 
        c.green = 255;
    else if (green < 0)
        c.green = 0;
    else c.green = green;
    if (blue > 255) 
        c.blue = 255;
    else if (blue < 0)
        c.blue = 0;
    else c.blue = blue;
    return c;
}

int getRed (struct color c) {
    return c.red;
}

bool equal_color (struct color c1, struct color c2) {
    if (c1.red == c2.red && c1.green == c2.green && c1.blue == c2.blue)
        return true;
    else return false;
}

struct color brighter (struct color c) {
    if (c.red == 0 && c.green == 0 && c.blue == 0) {
        c.red = c.green = c.blue = 3;
        return c;
    }
    if (c.red > 0 && c.red < 3)
        c.red = 3;
    if (c.green > 0 && c.green < 3)
        c.green = 3;
    if (c.blue > 0 && c.blue < 3)
        c.blue = 3;
    c.red /= 0.7;
    c.green /= 0.7;
    c.blue /= 0.7;
    if (c.red > 255)
        c.red = 255;
    if (c.green > 255)
        c.green = 255;
    if (c.blue > 255)
        c.blue = 255;
    return c;
}

struct color darker(struct color c) {

    if (c.red == 0 && c.green == 0 && c.blue == 0) {
        c.red = c.green = c.blue = 3;
        return c;
    }
    if (c.red > 0 && c.red < 3)
        c.red = 3;
    if (c.green > 0 && c.green < 3)
        c.green = 3;
    if (c.blue > 0 && c.blue < 3)
        c.blue = 3;
    c.red *= 0.7;
    c.green *= 0.7;
    c.blue *= 0.7;
    if (c.red > 255)
        c.red = 255;
    if (c.green > 255)
        c.green = 255;
    if (c.blue > 255)
        c.blue = 255;
    return c;
}




