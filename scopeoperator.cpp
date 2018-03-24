#include <iostream>
using namespace std;
class sne{
	private:
	int a;
	public:
	sne()
	{
		 a=10;
		 	}
		 	void dis();
	};
	void sne:: dis()
	{
		cout<<a;
	}
int main() {
	sne vb;
vb.dis();
	return 0;
}
