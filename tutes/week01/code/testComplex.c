//test code for Complex ADT

#include <stdio.h>
#include <stdlib.h>
#include "Complex.c"
#include <assert.h>

int main (int argc, char *argv[])
{
    printf("===== INITIALISING COMPLEX TEST =====\n");
    Complex z = complex_new(1, 1);
    Complex y = complex_new(2,2);
    Complex e = complex_new(-2,-1);
    assert(z->Re == 1 && z->Img == 1);
    assert(y->Re == 2 && y->Img == 2);
    assert(e->Re == -2 && e->Img == -1);
    complex_print(z);
    complex_print(y);
    complex_print(e);
    printf("Creation of complex numbers passed.\n");
    Complex a = complex_add(y, z);
    assert(a->Re == 3 && a->Img == 3);
    complex_print(a);
    printf("Addition of complex numbers pased.\n");
    Complex b = complex_multiply(a,y);
    assert(b->Re == 6 && b->Img == 6);
    complex_print(b);
    Complex c = complex_new(-3,-4);
    Complex d = complex_multiply(c,c);
    assert(d->Re == 9 && d->Img == 16);
    complex_print(d);
    printf("Multiplication of complex numbers passed.\n");

    printf("All tests passed! You are Awesome!\n");

    return EXIT_SUCCESS;
}
