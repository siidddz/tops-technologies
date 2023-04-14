#include<iostream>
using namespace std;
class a
{
	int area;	
	
	public:
	
		a()
		{
			area=0;
		}
		
		a(int l,int w)
		{
			area=l*w;
		}
		
		void disp()
		{
			cout<<"Area : "<<area;
		 } 

};
main()
{
	a a(5,5);
	a.disp();
}
