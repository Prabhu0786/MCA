
#include <iostream>
using namespace std;

struct Complex
{
    float real, imag;
};

Complex readComplex()
{
    Complex c;
    cout << "Enter real and imaginary parts: ";
    cin >> c.real >> c.imag;
    return c;
}

void display(Complex c)
{
    cout << c.real;
    if (c.imag >= 0)
        cout << " + " << c.imag << "i";
    else
        cout << " - " << -c.imag << "i";
    cout << endl;
}

Complex add(Complex a, Complex b)
{
    Complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

Complex subtract(Complex a, Complex b)
{
    Complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}

Complex multiply(Complex a, Complex b)
{
    Complex c;
    c.real = a.real * b.real - a.imag * b.imag;
    c.imag = a.real * b.imag + a.imag * b.real;
    return c;
}

int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    c1 = readComplex();

    cout << "Enter second complex number:\n";
    c2 = readComplex();

    cout << "\nFirst Complex Number: ";
    display(c1);

    cout << "Second Complex Number: ";
    display(c2);

    result = add(c1, c2);
    cout << "Addition: ";
    display(result);

    result = subtract(c1, c2);
    cout << "Subtraction: ";
    display(result);

    result = multiply(c1, c2);
    cout << "Multiplication: ";
    display(result);

    return 0;
}

