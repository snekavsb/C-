#include <iostream>
using namespace std;
class bajaj
{protected:
int milage;
public:
void setmilage(int a)
{
	milage=a;
}
};
class pulsar:public bajaj
{
	public:
	void run()
	{
		cout<<"pulsar"<<milage<<"km-pl"<<endl;
	}
};
class discover:public bajaj
{
	public:
	void run()
	{
		cout<<"king"<<milage<<"km-pl"<<endl;
	}
};

int main() {
	pulsar p;
	discover d;
	d.setmilage(45);
	p.setmilage(50);
	d.run();
	p.run();
	/*	pulsar p;
	discover d;
	bajaj *b1=&p;
	bajaj *b2=&d;
	b1->setmilage(50);
	b2->setmilage(85);
	d.run();
	p.run();*/
	
	return 0;
}
