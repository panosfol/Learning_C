#include <stdio.h>

typedef struct {
    int numerator, denominator;
} fraction;

fraction add_fractions (fraction, fraction);
fraction sub_fractions (fraction, fraction);
fraction mult_fractions (fraction, fraction);
fraction div_fractions (fraction, fraction);

int main() {

    fraction f1 = {20, 10}, f2 = {6, 10}, f;
    f = add_fractions(f1, f2);
    printf ("add = %d/%d\n", f.numerator, f.denominator);
    f = sub_fractions (f1, f2);
    printf ("sub = %d/%d\n", f.numerator, f.denominator);
    f = mult_fractions (f1, f2);
    printf ("mult = %d/%d\n", f.numerator, f.denominator);
    f = div_fractions(f1, f2);
    printf ("div = %d/%d\n", f.numerator, f.denominator);
    return 0;
}

fraction add_fractions(fraction f1, fraction f2) {
    fraction f;

    f.numerator = f1.numerator + f2.numerator;
    f.denominator = f1.denominator;
    return f;
}

fraction sub_fractions(fraction f1, fraction f2) {
    fraction f;

    f.numerator = f1.numerator - f2.numerator;
    f.denominator = f1.denominator;
    return f;
}

fraction mult_fractions (fraction f1, fraction f2) {
    fraction f;
    
    f.numerator = f1.numerator * f2.numerator;
    f.denominator = f1.denominator * f2.denominator;
    return f;
}

fraction div_fractions (fraction f1, fraction f2) {
    fraction f;
    f.numerator = f1.numerator * f2.denominator;
    f.denominator = f1.denominator * f2.numerator;
    return f;
}

    