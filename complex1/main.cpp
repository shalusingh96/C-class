#include <iostream>

using namespace std;
class complex {
    public:
    float real,imag;
   };

int main()
{
    complex a,b,c;
    cout <<"enter the real part and imaginary of first number";
    cin>>a.real>>a.imag;
    cout <<"enter the real part and imaginary of second number";
    cin>>b.real>>b.imag;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    cout <<"result is="<<c.real<<"+ "<<c.imag<<"i";
    return 0;
}

