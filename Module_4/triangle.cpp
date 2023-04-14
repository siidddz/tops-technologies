#include<iostream>
using namespace std;

double area(double base, double height) 
{
    return 0.5 * base * height;
}

int main() 
{
    double base = 5.0, height = 3.0;
    cout << "Area of triangle with base " << base << " and height " << height << " = " << area(base, height) << endl;

}
