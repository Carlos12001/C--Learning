#include <iostream>
using namespace std;
int foo(){
	int tmp=2;
	return tmp;
}

int main(){
	int number = foo();
	cout << number << endl;
	cin.get();
	return 1;
}
