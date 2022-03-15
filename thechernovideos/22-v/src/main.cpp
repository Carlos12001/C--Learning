#include <iostream>
#include external_src.h
using namespace std;

static char* globalInternVar = "Hi, I'm intern global var in main.cpp";

static void internFunction(){
	cout << "Hi, I'm intern function in main.cpp" << endl;
	return;
}

int main(){
    cout << "I'm in main.cpp" << endl;
    cout << "I'm gonna call \"globalExternVar\"" << endl;
	cout << globalExternVar << endl;
    cout << "I'm gonna call \"globalInternVar\"" << endl;
	cout << globalInternVar << endl << endl << endl;

    cout << "I'm gonna call tryUseMainStatics() in external_src.cpp" << endl;
    void tryUseMainStatics();

    cin.get();
    return 1;
}	
