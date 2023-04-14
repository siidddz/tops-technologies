#include<iostream>
using namespace std;
class functionoverloading
{
public:
  void data(int roll_no, int class_no, char student_name[6])
  {
    cout << "Name of the student= " << student_name << endl;
    cout << "Roll no. of the student= " << roll_no << endl;
    cout << "Class number of the student= " << class_no << endl;
    cout << "\n";
  }
  void data(int teacher_id, int teacher_teaching_class, char teacher_name[10], int salary)
  {

    cout << "Name of the teacher= " << teacher_name << endl;
    cout << "Teacher id = " << teacher_id << endl;
    cout << "Teacher teaching class" << teacher_teaching_class << endl;
    cout << "Salary of the teacher = " << salary << endl;
  }
};
int main()
{
  functionoverloading obj1;
  obj1.data(5, 10, "Rohit");
  obj1.data(11701275, 10, "Sachin Mehta", 50000);
  return (0);
}
