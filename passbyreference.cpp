#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void getdata()
		{
			cout<<"Enter the value of a: "<<endl;
			cin>>a;
		}
};
void function(A& obj)
{
	obj.a=obj.a+1;
	cout<<"Value of a inside the function: "<<obj.a<<endl;
}
int main()
{
	A obj;
	obj.getdata();
	function(obj);
	cout<<"Value of a inside original object: "<<obj.a;
	return 0;
}



