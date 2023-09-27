#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
	public:
		void getData()
		{
			a=x;
			b=y;
		}
		void displayData()
		{
			cout<<"Value of a is "<<endl;
			cout<<"Value of b is "<<endl;
		}
};
int main()
{
	A obj[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter a: "<<endl;
		cin>>a;
		cout<<"ENter b: "<endl;
		cin>>b;
		obj[i].getData();
		obj[i].displayData();
		return 0;
	}
}



