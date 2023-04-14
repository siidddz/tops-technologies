#include <iostream>
using namespace std;

class Calculator 
{
public:
    int a, b;

    Calculator(int x, int y) 
	{
        a = x;
        b = y;
    }

    int add() 
	{
        return a + b;
    }

    int subtract() 
	{
        return a - b;
    }

    float divide() 
	{
        if (b == 0) 
		{
            cout << "Cannot divide by zero." << endl;
            return 0;
        }
        return static_cast<float>(a) / b;
    }

    int multiply() 
	{
        return a * b;
    }
};

int main() 
{
    int x, y;
    char op;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    Calculator calc(x, y);

    switch (op) {
        case '+':
            cout << x << " + " << y << " = " << calc.add() << endl;
            break;
        case '-':
            cout << x << " - " << y << " = " << calc.subtract() << endl;
            break;
        case '*':
            cout << x << " * " << y << " = " << calc.multiply() << endl;
            break;
        case '/':
            cout << x << " / " << y << " = " << calc.divide() << endl;
            break;
        default:
            cout << "Invalid operator." << endl;
            break;
    }

}

