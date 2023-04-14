#include<iostream>
using namespace std;

double area(double length, double width) 
{
    return length * width;
}

int main() 
{
    double length = 5.0, width = 3.0;
	cout << "Area of rectangle with length " << length << " and width " << width << " = " << area(length, width) << endl;
}

