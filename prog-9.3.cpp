#include<iostream>
using namespace std;
class point
{
	public:
		int sum;
	point()
	{
		sum=0;
	}
	point(int x,int y)
	{
		sum=x+y;
	}
	int display()
	{
		cout<<"SUM IS : "<<sum;
	}
};
int main()
{
	point o;
	point o1(12,16);
	o.display();
	cout<<endl;
	o1.display();
}
