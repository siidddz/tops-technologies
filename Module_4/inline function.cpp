#include<iostream>
using namespace std;

inline int multiply(int a, int b) 
{
    return a * b;
}

inline int cube(int a) 
{
    return a * a * a;
}

int main() 
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Multiplication value: " << multiply(x, y) << endl;
    cout << "Cubic value of first number: " << cube(x) << endl;
    cout << "Cubic value of second number: " << cube(y) << endl;

}
