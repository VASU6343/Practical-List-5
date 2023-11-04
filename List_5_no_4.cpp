#include<iostream>
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
