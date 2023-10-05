#include<iostream>
using namespace std;
class A{
	public:
		int data;
		void setData(int x)
		{
			data=x;
		}
};
void square(A *ptr)
{
	ptr->data*=ptr->data;
	cout<<"Square of a member is "<<ptr->data;
}
int main()
{
	A obj;
	obj.setData(10);
	square(&obj);
	return 0;
}



