//Header file for complex number implementation

typedef struct complexNumber *Complex;

Complex complex_new(int Re, int Img);

//Add two complex numbers together
Complex complex_add(Complex y, Complex z);

//Multiply two complex numbers together
Complex complex_multiply(Complex y, Complex z);

//Delete a complex number
void complex_delete(Complex z);

//Print a complex number to stdout
void complex_print(Complex z);

