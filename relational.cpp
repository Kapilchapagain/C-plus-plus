#include<iostream>
using namespace std;
class RelationalOperators{
	public:
		int a,b;
		RelationalOperators(int x,int y)
		{
			a=x;
			b=y;
		}
		void compare()
		{
			if(a>b)
			{
				cout<<"a is greater than b"<<endl;
			}
			if(a<b)
			{
				cout<<"a is smaller than b"<<endl;
			}
			if(a=b)
			{
				cout<<"a is equal to b"<<endl;
			}
			if(a!=b)
			{
				cout<<"a is not equal to b"<<endl;
			}
		}
};
int main()
{
	int a,b;
	cout<<"Enter any two numbers:"<<endl;
	cin>>a>>b;
	RelationalOperators obj(a,b);
    obj.compare();
	return 0;
}




