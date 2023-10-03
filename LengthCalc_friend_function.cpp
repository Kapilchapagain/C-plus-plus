#include<iostream>
using namespace std;
class A{
	int cm;
	public:
	void getdata()
	{
		cout<<"Enter length in cm:"<<endl;
		cin>>cm;
	}
	friend class C;
};
class B{
	int meter;
	public:
	void getdata2()
	{
		cout<<"Enter length in meter:"<<endl;
		cin>>meter;
	}
	friend class C;
};
class C{
	int total_length_in_cm;
	public:
	void getResults(A&,B&);
};
void C::getResults(A& obj, B& obj1)
{
	obj1.meter=obj1.meter*100;
	total_length_in_cm=obj.cm+obj1.meter;
	cout<<"The total length in cm is: "<<total_length_in_cm;
}
int main()
{
	A obj;
	B obj1;
	C obj2;
	obj.getdata();
	obj1.getdata2();
	obj2.getResults(obj,obj1);
	return 0;
}


