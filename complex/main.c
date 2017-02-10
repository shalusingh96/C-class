#include<stdio.h>
#include"complex.h"
int main()
{
    complex a,b,result;
printf("Enter the real part of a\n");
scanf("%f",&a.real);
printf("Enter the imaginary part of a\n");
scanf("%f",&a.imag);
printf("Enter the real part of b\n");
scanf("%f",&b.real);
printf("Enter the imaginary part of b\n");
scanf("%f",&b.imag);
result=add(a,b);
printf("sum=%f+%fi",result.real,result.imag);
return (0);

}


