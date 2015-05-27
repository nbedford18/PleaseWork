#include<iostream>
using namespace std;

class EvenNumber{
public:
	int value;
	EvenNumber(){
		value = 0;
	}
	EvenNumber(int newvalue){
		value = newvalue;
	}
	int getValue(){
		return value;
	}
	int getNext(){
		do{
			value++;
		} while (value % 2 != 0);
		
			return value;
		
	}

	int getPrevious(){
		do{
			value--;
		} while (value % 2 != 0); 
			return value;
		
	}
};
int main(){
	EvenNumber EvenNumber1;
	EvenNumber1.value = 16;
	cout << "The next even Number is " << EvenNumber1.getNext() << endl;
	cout << "The previous even number is " << EvenNumber1.getPrevious() << endl;
}
