#include <iostream>
using namespace std;
class parent{public:
int dad ;
};
class child:public parent
{
public:
int son ;
void dis()
{
cout<<"single inherientce";	
}
};

int main() {
	child c;
	c.dad=45;
	c.son=16;
	c.dis();
	cout<<"dad"<<c.dad<<endl;
	cout<<"son"<<c.son<<endl;
	
	return 0;
}
