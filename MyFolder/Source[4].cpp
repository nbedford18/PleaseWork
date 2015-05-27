#include <iostream>
#include<cstdlib>
#include <ctime>

using namespace std;
class MyInteger{
public:
	int value;
	
	MyInteger(){
		value = 0;
	}
	MyInteger(int newvalue){
		value = newvalue;
	}
	int getvalue(){
		return value;
	}
	 bool isEven()const{
		 bool even=false;
		 if (value % 2 == 0)
			 even = true;
		  return even;
			 
}
	bool isOdd()const{
		bool odd=false;
		if (value % 2 != 0)
			 odd = true;

		return odd;

	}
	bool isPrime()const{
		bool prime=true;
		int x=1;
		x++;
		if (value%x == 0)
			prime = false;
		return prime;

	}
	static bool isEven(int x){
		bool even = false;
		if (x % 2 == 0)
			even=true;
		return even;

	}
	static bool isOdd(int x){
		bool odd = false;
		if (x % 2 != 0)
			odd=true;
		return odd;
	}
	static bool isPrime(int x){
		bool prime = true;
		int j=1;
		j++;
		if (x%j == 0)
			prime=false;
		return prime;

	}
	static bool isEven(const MyInteger& a){
		return a.isEven();
		
	

	}
	static bool isOdd(const MyInteger& a){
		return a.isOdd();

	}
	static bool isPrime(const MyInteger& a){
		return a.isPrime();

	}
	bool equals(int x) const{
		bool equal = false;
		if (value == x)
			equal=true;
		return equal;

	}
	bool equals(const MyInteger& c) const{
		return c.equals(c);
	}
	static int parseInt(const string& s){
		int i;
		for (i = 0; i < s.length(); i++){
			i = i * 10;
			i = i + (s[i] - '0');
		}
		return i;


	}
};
int main(){
	srand(time(NULL));
	int x = rand() % 11;
	int y = rand() % 11;
	int z = rand() % 11;
	MyInteger I1;
	I1.value = x;
	cout << I1.getvalue() << endl;
	cout << "Is the value even? " << I1.isEven() << endl;
	cout << "Is the value odd? " << I1.isOdd() << endl;
	cout << "Is the value prime? " << I1.isPrime() << endl;
	
	MyInteger I2;
	I2.value = y;
	cout << I2.getvalue() << endl;
	cout << "Is the value even? " << I2.isEven(y) << endl;
	cout << "Is the value odd? " << I2.isOdd(y) << endl;
	cout << "Is the value prime? " << I2.isPrime(y) << endl;
	MyInteger mi(z);
	cout << z << endl;
	cout << "Is that even? " << MyInteger::isEven(mi) << endl;
	cout << "Is that odd? " << MyInteger::isOdd(mi) << endl;
	cout << "Is that prime? " << MyInteger::isPrime(mi) << endl;
	MyInteger I3;
	I3.value = z;
	cout << I3.getvalue() << endl;
	cout << "Is it equal to int? "<<I3.equals(x) << endl;
	cout <<"Is it equal to const? "<< I3.equals(y) << endl;
	const string c("6587");
	cout << MyInteger::parseInt(c) << endl;


}