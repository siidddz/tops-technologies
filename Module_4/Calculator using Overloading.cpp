#include <iostream>
using namespace std;

int add(int a, int b) 
{
    return a + b;
}

double add(double a, double b) 
{
    return a + b;
}

int subtract(int a, int b) 
{
    return a - b;
}

double subtract(double a, double b) 
{
    return a - b;
}

int multiply(int a, int b) 
{
    return a * b;
}

double multiply(double a, double b) 
{
    return a * b;
}

int divide(int a, int b) 
{
    return a / b;
}

double divide(double a, double b) 
{
    return a / b;
}

int main() 
{
    int intA = 10, intB = 5;
    double doubleA = 10.5, doubleB = 2.5;

    cout << "Integers:" << endl;
    cout << intA << " + " << intB << " = " << add(intA, intB) << endl;
    cout << intA << " - " << intB << " = " << subtract(intA, intB) << endl;
    cout << intA << " * " << intB << " = " << multiply(intA, intB) << endl;
    cout << intA << " / " << intB << " = " << divide(intA, intB) << endl;

    cout << "Doubles:" << endl;
    cout << doubleA << " + " << doubleB << " = " << add(doubleA, doubleB) << endl;
    cout << doubleA << " - " << doubleB << " = " << subtract(doubleA, doubleB) << endl;
    cout << doubleA << " * " << doubleB << " = " << multiply(doubleA, doubleB) << endl;
    cout << doubleA << " / " << doubleB << " = " << divide(doubleA, doubleB) << endl;
}
