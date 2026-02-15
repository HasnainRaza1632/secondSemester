#include <iostream>
using namespace std;

class Car{
public:
	string name;
	int price;
	int bhr;
	int maxSpeed;
	
	Car(string n , int p , int b , int mSpeed){ 	//Parameterised Constructor
		name = n ;
		price = p ; 
		bhr = b;
		maxSpeed = mSpeed;
	}
	
	Car(){			//Default Constructor
		
	}
};

void printObject(Car c);

int main()
{
	Car c1("Honda Civic" , 7000000, 1900 , 190);
	printObject(c1);
	Car c2;
	c2.name = "Honda City" ; 
	c2.price = 4000000;
	c2.bhr = 1300;
	c2.maxSpeed = 150 ; 
	
	printObject(c2); 
	return 0;
}

void printObject(Car c)
{
	cout << c.name << " " << c.price << " " << c.bhr << " " << c.maxSpeed << endl;
}
