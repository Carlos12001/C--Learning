#include <iostream>
using namespace std;

int* foo(){
	int tmp = 50;
	return &tmp;
}

void anotherFoo(){
	int tmp = 60;
	return;
}

int main(){

	int* result = foo();
	cout<< *result << endl;

	anotherFoo();
	cout<< *result << endl;

	return 1;
}
