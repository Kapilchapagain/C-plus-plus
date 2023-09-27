#include<iostream>
using namespace std;
class staticExample{
	public:
		static int b;
		void displayB()
		{
			cout<<"Value of b: "<<b<<endl;
		}
};
int staticExample::b=50;
int main()
{
	staticExample obj1,obj2;
	obj1.displayB();
	obj2.displayB();
	return 0;
}



