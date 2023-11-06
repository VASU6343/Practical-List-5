#include<iostream>
using namespace std;
class animal
{
	public:
	eat()
	{
    cout<<"220130318016";
    cout<<"Vasu Sapariya";
		cout<<"Eating ..... :)";
	}
};
class dog : public animal
{
	public:
	eat()
	{
		cout<<"Dog Eating Bread :)";
	}
};
int main()
{
	dog d=dog();
	d.eat();
	
	return 0;
}
