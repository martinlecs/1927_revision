//Implementation of Complex Number ADT
//By Martin Le 
//Date: 10/11/2016
//Notable bugs: Printing of negative complex numbers works but not 
//what we had in mind. ie. we print 1 -1i instead of 1 - i. 

#include <stdio.h>
#include <stdlib.h>
#include "Complex.h"
#include <assert.h>

struct complexNumber {
    int Re;
    int Img;
};

Complex complex_new(int Re, int Img)
{
    Complex z = malloc(sizeof(Complex));
    assert(z != NULL);

    //Set fields
    z->Re = Re;
    z->Img = Img;
    return z;
}

void complex_delete(Complex z)
{
    if(z != NULL) free(z);
}

void complex_print(Complex z)
{
    if (z->Img < 0) printf("%d %di\n", z->Re, z->Img);
    else printf("%d + %di\n", z->Re, z->Img);
}

Complex complex_add(Complex y, Complex z)
{
    Complex x = malloc(sizeof(Complex));
    assert(x != NULL);
    x->Re = y->Re + z->Re;
    x->Img = y->Img + z->Img;
    return x;
}

Complex complex_multiply(Complex y, Complex z)
{
    Complex x = malloc(sizeof(Complex));
    assert (x != NULL);
    x->Re = y->Re * z->Re;
    if(y->Img < 0 && z->Img < 0) {
        int y_Img = (~(y->Img)+1);
        int z_Img = (~(z->Img)+1);
    }
    x->Img = y->Img * z->Img;
    
    return x;
}
