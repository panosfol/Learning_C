#include <stdio.h>


    typedef struct {
        double real, imaginary;
    } complex;
    complex add_complex (complex, complex);
    complex make_complex(double x,double y);

int main() {
    complex c1 = {5, 6}, c2 = {2, 5} , c3;
    complex p = make_complex(2.6, 3.5);
    complex q = add_complex (c1 ,c2);
    printf ("%f\n", p.real);
    printf ("%f\n", q.imaginary);
    return 0;
}

complex make_complex(double x, double y) {
    complex p;

    p.real = x;
    p.imaginary = y;
    return p;
}

complex add_complex (complex p, complex q) {
    complex temp;

    temp.real = p.real + q.real;
    temp.imaginary = p.imaginary + q.imaginary;
    return temp;
}

