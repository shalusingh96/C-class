#include"complex.h"
complex add(complex a,complex b)

{   complex result;
result.real=a.real+b.real;
result.imag=b.imag+b.imag;
return(result);
}

