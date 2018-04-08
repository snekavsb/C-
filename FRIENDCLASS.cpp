#include <iostream>
using namespace std;
class aircel
{
	private:
	char UPID[7];
	public:
	aircel()
	{
		cin>>UPID;
	}
	friend  class vodafone;
			};
	class vodafone
	{
	public:
	void func(aircel a)
	{
		cout<<"\nupid"<<a.UPID;
	}
	};

	int main() {
	aircel a;
	vodafone v;
	v.func(a);
	
		return 0;
}
