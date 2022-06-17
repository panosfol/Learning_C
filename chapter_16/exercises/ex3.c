#include <stdio.h>

    struct complex add_complex (struct complex, struct complex);
    struct complex make_complex(double x,double y);
    struct complex {
        double real, imaginary;
    };

int main() {
    struct complex c1 = {5, 6}, c2 = {2, 5} , c3;
    struct complex p = make_complex(2.6, 3.5);
    struct complex q = add_complex (c1 ,c2);
    printf ("%f\n", p.real);
    printf ("%f\n", q.imaginary);
    return 0;
}

struct complex make_complex(double x, double y) {
    struct complex p;

    p.real = x;
    p.imaginary = y;
    return p;
}

struct complex add_complex (struct complex p, struct complex q) {
    struct complex temp;

    temp.real = p.real + q.real;
    temp.imaginary = p.imaginary + q.imaginary;
    return temp;
}

