#include<iostream>
using namespace std;
class employee
{
	int id;
	string contact,salary;
	char name[25],email[30],des[25];
	
	public:
		employee();
		void disp();
};

employee::employee()
{
	cout<<"Enter ID :";
	cin>>id;
	fflush(stdin);
	
	cout<<"Enter Name :";
	gets(name);
	fflush(stdin);
	
	cout<<"Enter Designation :";
	gets(des);
	fflush(stdin);
	
	cout<<"Enter Email ID :";
	gets(email);
	
	cout<<"Enter Contact Number :";
	cin >>contact;
	
	cout<<"Enter Salary :";
	cin>>salary;	
}
void employee::disp()
{
	cout<<"ID :"<<id<<endl;
	cout<<"Name :"<<name<<endl;
	cout<<"Designation :"<<des<<endl;
	cout<<"Email ID :"<<email<<endl;
	cout<<"Contact Number :"<<contact<<endl;
	cout<<"Salary :"<<salary;
}
main()
{
	employee e;
	e.disp();
}
