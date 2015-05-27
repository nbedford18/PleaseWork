#include <iostream>
using namespace std;
class Fan{
public:
	int speed;
	bool on;
	double radius;
	Fan(){
		speed = 1;
		on = false;
		radius = 5;
	}
	
	void turnOn(){
		on = true;
	}
	void turnOff(){
		on = false;
	}
	

};
int main(){
	Fan Fan1;
	Fan1.turnOn();
	Fan1.radius = 10;
	Fan1.speed = 3;
	cout << "The radius of the first fan is " << Fan1.radius << endl;
	cout << "The speed of the first fan is " << Fan1.speed << endl;
	cout << endl;
	Fan Fan2;
	Fan2.turnOff();
	Fan2.speed = 2;
	Fan2.radius = 5;
	cout << "The radius of the second fan is " << Fan2.radius << endl;
	cout << "The speed of the second fan is " << Fan2.speed << endl;
	cout << endl;
}

