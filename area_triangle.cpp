#include<iostream>
using namespace std;
class triangle
{
	public:
		float base,height,area;
	public:
		void getdata()
		{
		cout<<"....Calculating area of a triangle..."<<endl;
		cout<<"Enter the base: ";
		cin>>base;
		cout<<"Enter the height: ";
		cin>>height;
	}
		void calculate_area()
		{
			area=(base*height)/2;
			cout<<"The area of triangle is "<<area<<endl;
		}
	};
int main()
{
	triangle obj;
	obj.getdata();
	obj.calculate_area();
	return 0;
 
}




