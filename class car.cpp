#include <iostream>
using namespace std ;
 class Car {
 	public:
 		string name;
 		string color;
 		int price;
 };
int main () {
	Car car1;
	car1.name="Toyota";
	car1.color = "rad";
	car1.price=1000;
	
	Car car2;
	car2.name="BMW";
	car2.color="black";
	car2.price=10,000;
	
	Car car3;
	car3.name="Corolla";
	car3.color="rad";
	car3.price=10000;
	
	cout<<"the car name is :"<<car1.name<<endl;
	cout<<"the car color is:"<<car1.color<<endl;
	cout<<"the car price:"<<car1.price<<endl;
	
		cout<<"the car name is :"<<car2.name<<endl;
	cout<<"the car color is:"<<car2.color<<endl;
	cout<<"the car price:"<<car2.price<<endl;
	
		cout<<"the car name is :"<<car3.name<<endl;
	cout<<"the car color is:"<<car3.color<<endl;
	cout<<"the car price:"<<car3.price<<endl;
	
	
}

	//cout<<car1.name<<"is:"<<car1.color<<"and:"<<car1.price<<endl;
	//cout<<car2.name<<"is:"<<car2.color<<"and:"<<car2.price;
