#include<iostream>
using namespace std;
class base
{
	public:
			virtual void print()
			{
        cout<<"220130318016";
        cout<<"Vasu Sapariya";
				cout<<"print base class"<<endl;	
			}	
			void show()
			{
				cout<<"show base class"<<endl;
			}
};
class derived : public base
{
	public:
			void print()
			{
				cout<<"print derived class"<<endl;
			}
			void show()
			{
				cout<<"show derived class"<<endl;
			}
};
int main()
{
	base *b;
	derived d;
	b=&d;
	b->print();
	b->show();
	return 0;
}
