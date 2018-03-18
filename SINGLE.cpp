#include <iostream>
using namespace std;
class parent{public:
int dad ;
};
class child:public parent
{
public:
int son ;
};

int main() {
	child c;
	c.dad=45;
	c.son=16;
	cout<<"dad"<<c.dad<<endl;
	cout<<"son"<<c.son<<endl;
	
	return 0;
}
	
