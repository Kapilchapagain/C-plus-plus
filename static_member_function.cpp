#include<iostream>
using namespace std;
class A{
	public:
		static int x;
		int y;
		void setData(int a, int b)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<"x= "<<x<<"y= "<<y<<endl;
		}
		static void display_static()
		{
			cout<<"x= "<<x<<endl;
		}
};
int A::x;
int main()
{
	A obj1,obj2,obj3;
	obj1.setData(3,6);
	obj2.setData(5,7);
	obj3.setData(7,8);
	obj1.display();
	obj2.display();
	obj3.display();
	A::display_static();
	return 0;
}



