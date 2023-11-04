#include<iostream>
using namespace std;
class pointer
{
	public:
	int age;
	string name;
	pointer(string name ,int age)
{
	this->age=age;
	this->name=name;
}
pointer(int age,string name)
{
	cout<<"220130318016"<<endl;
	cout<<"Vasu Sapariya"<<endl;
	cout<<"this is age::"<<age<<endl;
	cout<<"this is name::"<<name<<endl;
}
};

int main()
{
	pointer p1(17,"Vasu");
	return 0;
}
