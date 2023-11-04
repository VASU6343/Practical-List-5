#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
			cout<<"220130318016";
			cout<<"Vasu sapariya";
			cout<<"This is vehicle"<<endl;
			
		}
};
class car : public vehicle{
	public:
		car(){
			cout<<"This is car"<<endl;
		}
};
class four : public car{
	public:
		four(){
			cout<<"This is Four wheeler"<<endl;
		}
}; 
int main()
{
	four f;
}
#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
      			cout<<"220130318016";
      			cout<<"Vasu Sapariya";
			cout<<"This is vehicle"<<endl;
		}
};
class car
{
	public:
		car()
		{
			cout<<"This is car"<<endl;
		}
};
class four : public car,public vehicle
 {
	public:
		four()
		{
			cout<<"Four wheeler";
		}
}; 
int main()
{
	four f;
}#include<iostream>
using namespace std;
class vehicle
{
	public:
		vehicle()
		{
      		cout<<"220130318016"<<endl;
      		cout<<"Vasu Sapariya"<<endl;
			cout<<"This is vehicle"<<endl;
		}
};
class car
{
	public:
		car()
		{
			cout<<"This is car"<<endl;
		}
};
class four : public vehicle,public car
 {
	public:
		four()
		{
			cout<<"Four wheeler";
		}
}; 
int main()
{
	four f;
}
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
