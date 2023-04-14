#include<iostream>
using namespace std;

const double PI = 3.14159;

double area(double radius) 
{
    return PI * radius * radius;
}

int main() 
{
    double radius = 5.0;

    cout << "Area of circle with radius " << radius << " = " << area(radius) << endl;

}

