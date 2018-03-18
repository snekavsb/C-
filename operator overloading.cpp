#include <iostream>
using namespace std;
class test
{
public:
int count=10;
void operator --()
{
	count=count+1;
}
void display()
{
	cout<<"count"<<count;
}
};
int main() {
	test t;
	--t;
	t.display();
	return 0;
}
