#include <iostream>
#include "file1.h"
using namespace std;

static int* secret = new int;

static void function(){
    *secret =  rand() % 11;
    cout<<"Susto"<<endl <<
        "ademas tengo un secretPointer: " << *secret << endl;
}

void use_function(){
    function();
}