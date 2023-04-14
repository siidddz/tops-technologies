#include <iostream>
using namespace std;

class Student 
{
protected:
    int roll_no;
public:
    void read_data() 
	{
        cout << "Enter roll number: ";
        cin >> roll_no;
    }
};

class Test : public Student 
{
protected:
    int marks1, marks2;
public:
    void read_data() 
	{
        Student::read_data();
        cout << "Enter marks in subject 1: ";
        cin >> marks1;
        cout << "Enter marks in subject 2: ";
        cin >> marks2;
    }
};

class Result : public Test 
{
public:
    void display_result() 
	{
        cout << "Roll number: " << roll_no << endl;
        cout << "Marks in subject 1: " << marks1 << endl;
        cout << "Marks in subject 2: " << marks2 << endl;
        cout << "Total marks: " << marks1 + marks2 << endl;
    }
};

int main() 
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Result *students = new Result[n];

    for (int i = 0; i < n; i++) {
        cout << endl << "Enter details of student " << i+1 << ":" << endl;
        students[i].read_data();
    }

    cout << endl << "Results:" << endl;
    for (int i = 0; i < n; i++) {
        cout << endl << "Details of student " << i+1 << ":" << endl;
        students[i].display_result();
    }

    delete[] students;
}
