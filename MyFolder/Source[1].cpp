# include <iostream>
# include<cmath>
using namespace std;

class QuadraticEquation{
public:
	double a;
	double b;
	double c;
	double getDiscriminant(){
		double discrim;
		discrim = pow(b, 2) - (4 * a*c);
		return discrim;
	}
	double getRoot1(){
		int r1;
		r1 = (-b + sqrt(pow(b, 2) - 4 * (a*c))) / (2 * a);
		return r1;
	}
	double getRoot2(){
		int r2;
		r2 = (-b - sqrt(pow(b, 2) - 4 * (a*c))) / (2 * a);
		return r2;
	}
};
int main(){
	QuadraticEquation QuadraticEquation1;
	
	cout << "Enter value for a: ";
	cin >> QuadraticEquation1.a;
	cout << "Enter value for b: ";
	cin >> QuadraticEquation1.b;
	cout << "Enter value for c: ";
	cin >> QuadraticEquation1.c;
	if (QuadraticEquation1.getDiscriminant() > 0){
		cout << "The first root is: " << QuadraticEquation1.getRoot1() << endl;
		cout << "The second root is: " << QuadraticEquation1.getRoot2() << endl;
	}
	else if (QuadraticEquation1.getDiscriminant() == 0){
		cout << "The root is: " << QuadraticEquation1.getRoot1() << endl;
	}
	else{
		cout << "The equation has no real roots" << endl;
	}
	
	

	

}


