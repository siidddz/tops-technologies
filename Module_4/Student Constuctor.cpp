#include<iostream>
using namespace std;
class student
{
	int id;
	string contact;
	char name[20],email[50],add[50];
	
	public:
		student()
		{
			cout<<"Enter ID :";
			cin>>id;
			
			fflush(stdin);
			cout<<"Enter Name :";
			gets(name);
			
			fflush(stdin);
			cout<<"Enter Email ID :";
			gets(email);
			
			fflush(stdin);
			cout<<"Enter Address :";
			gets(add);
			
			cout<<"Enter Contact :";
			cin>>contact;
			
		}
		void disp()
		{
			cout<<"ID :"<<id<<endl;
			cout<<"Name :"<<name<<endl;
			cout<<"Email :"<<email<<endl;
			cout<<"Address :"<<add<<endl;
			cout<<"Contact :"<<contact;
		}
};
main()
{
	student s;
	s.disp();
}
