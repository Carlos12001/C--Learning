#include <iostream>
using namespace std;

/*
 * It is preferred to use a reference,
 * when the var need to changed in other
 * funtion.
 */
void Double(int &num){
	num *= 2;
	return;
}

int main(){
	
	int number = 16;
	cout << "Number" << endl;
	cout << "number => " << number << endl;

	cout << "=============================" << endl;

	//A pointer is only address of one value	
	int *ptr = &number;

	cout << "Pointer" << endl;
	cout << "ptr => " << ptr << endl;
	cout << "*ptr => " << *ptr << endl;

	cout << "=============================" << endl;

	//A references is the value of one value
	int &ref = number;
	cout << "Reference" << endl;
	cout << "ref => " << ref << endl;
	
	cin.get();
	return 0;
}
