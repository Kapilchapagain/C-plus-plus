#include<iostream>
using namespace std;
class test{
	private:
		int num;
		public:
		test (int num)
		{
			this->num=num;
		}
		void display()
		{
			cout<<"Value of x is "<<num;
		}
};
int main()
{
	test obj(8);
	obj.display();
	return 0;
}




