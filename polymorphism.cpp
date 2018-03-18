#include <iostream>
using namespace std;
void area(int a)
{
	int ar=a*a;
	cout<<a<<endl;
}
void area(int l,int b)
{
	int ar=l*b;
		cout<<ar;
}
void area(float p,int r)
{
	float ar=p*r*r;
		cout<<ar;
}
int main() {
	area(2);
	area(2,2);
/*	area(3.14,2);*/
	return 0;
}
