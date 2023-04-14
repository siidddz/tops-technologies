#include <iostream>
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
            cout << "num1 = " << num1 << endl;
            cout << "num2 = " << num2 << endl;
        }
        friend int max(Numbers n); 
};

int max(Numbers n) 
{
    if (n.num1 > n.num2) 
	{
        return n.num1;
    } else 
	{
        return n.num2;
    }
}

int main() 
{
    int n1 = 5, n2 = 10;
    Numbers nums(n1, n2);

    cout << "Given numbers:" << endl;
    nums.display();

    int max_num = max(nums);

    cout << "Maximum number: " << max_num << endl;
}

