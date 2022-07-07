#include<iostream>
using namespace std;
class abc
{
	public:
		int add(int x,int y)
		{
			return (x+y);
		}
		double add(double x,double y)
		{
			return (x+y);
		}
};
int main()
{
	int x;
	double y;
	abc obj;
	x=obj.add(10,20);
	y=obj.add(2.3,4.5);
	cout<<x<<endl;
	cout<<y<<endl;
}
