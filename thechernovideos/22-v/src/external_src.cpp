#include <iostream>
using namespace std;


void tryUseMainStatics(){
    cout << "I'm gonna call \"globalInternVar\"" << endl;
    try {
        extern char* globalInternVar;
        cout << globalInternVar << endl;
    } catch (...) {
        cout << "I can't call \"globalInternVar\"" << endl;
    }

    cout << "I'm gonna call internFunction()" << endl;
    try {
        extern void internFunction();
    } catch (...) {
        cout << "I can't call internFunction() " << endl;
    }
}