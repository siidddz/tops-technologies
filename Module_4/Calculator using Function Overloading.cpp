#include <iostream>
using namespace std;

int add(int a, int b) 
{
    return a + b;
}

float add(float a, float b) 
{
    return a + b;
}

int subtract(int a, int b) 
{
    return a - b;
}

float subtract(float a, float b) 
{
    return a - b;
}

int multiply(int a, int b) 
{
    return a * b;
}

float multiply(float a, float b) 
{
    return a * b;
}

int divide(int a, int b) 
{
    return a / b;
}

float divide(float a, float b) 
{
    return a / b;
}

int main() 

{
    int a = 5, b = 2;
    float x = 5.5, y = 2.2;

    cout << "Addition of " << a << " and " << b << " is " << add(a, b) << endl;
    cout << "Addition of " << x << " and " << y << " is " << add(x, y) << endl;

    cout << "Subtraction of " << a << " and " << b << " is " << subtract(a, b) << endl;
    cout << "Subtraction of " << x << " and " << y << " is " << subtract(x, y) << endl;

    cout << "Multiplication of " << a << " and " << b << " is " << multiply(a, b) << endl;
    cout << "Multiplication of " << x << " and " << y << " is " << multiply(x, y) << endl;

    cout << "Division of " << a << " and " << b << " is " << divide(a, b) << endl;
    cout << "Division of " << x << " and " << y << " is " << divide(x, y) << endl;
}

