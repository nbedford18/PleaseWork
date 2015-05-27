#include <iostream>
#include <cstring>
#include<string>
using namespace std;
string sort(string& s);
int main(){
	string c;
	cout << "Enter a string s " << c << endl;
	cin >> c;
	sort(c);
	cout << c << endl;

}
string sort(string& s){
	for (int i = 0; i < s.length(); i++){
		char cm = s[i];
		int cmi = i;
		for (int j = i + 1; j < s.length(); j++){
			if (cm > s[j]){
				cm = s[j];
				cmi = j;
			}
		}
		if (cmi != i){
			s[cmi] = s[i];
			s[i] = cm;
		}
	}
	return s;
}