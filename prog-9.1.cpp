#include<iostream>
using namespace std;
class point
{
	private:
		int i;
		int j;
		int k;
	public:
		point(int x1,int y1)
		{
			i=x1;
			j=y1;
		}
		void sum()
		{
			k=i+j;
			cout<<"SUM IS : "<<k;
		}
};
int main()
{
	point p1(12,22);
	p1.sum();
}
