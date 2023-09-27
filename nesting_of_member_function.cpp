#include<iostream>
using namespace std;
class SIcalc{
	private:
		float p,t,r,si;
		public:
			void SI()
			{
				cout<<"Enter principle: "<<endl;
				cin>>p;
				cout<<"Enter time: "<<endl;
				cin>>t;
				cout<<"Enter rate: "<<endl;
				cin>>r;
				si=(p*t*r)/100;
				cout<<"Simple Interest:"<<si<<endl;
			}
			float findTotal()
			{
				SI(); //nesting
				float total=si+p;
				return total;
			}
};
int main()
{
	SIcalc obj;
	int res;
	res=obj.findTotal();
	cout<<"The total receivable amount is "<<res;
	return 0;
}



