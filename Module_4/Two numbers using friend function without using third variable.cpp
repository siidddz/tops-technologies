#include<iostream>
using namespace std;

class Numbers 
{
    private:
        int num1, num2;
    public:
        Numbers(int n1, int n2) 
		{
            num1 = n1;
            num2 = n2;
        }
        void display() 
		{
            cout << "Numbers after swapping:" << endl;
            cout << "num1 = " << num1 << endl;
            cout << "num2 = " << num2 << endl;
        }
        friend void swap(Numbers &n); 
};

void swap(Numbers &n) 
{
    n.num1 = n.num1 + n.num2;
    n.num2 = n.num1 - n.num2;
    n.num1 = n.num1 - n.num2;
}

int main() 
{
    int n1 = 5, n2 = 10;
    Numbers nums(n1, n2);

    cout << "Numbers before swapping:" << endl;
    cout << "num1 = " << n1 << endl;
    cout << "num2 = " << n2 << endl;

    swap(nums);

    nums.display();
}

