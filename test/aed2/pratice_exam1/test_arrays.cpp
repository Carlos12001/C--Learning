//
// Created by carlos on 4/23/2022.
//

#include "test_arrays.h"
#include "iostream"
using namespace std;
void testArray1(){
    int array [] = {1, 2, 3, 4};
    int* ptr = array;
    ptr++;
    ptr++;
    cout << array[-1] << endl;
    cout << *(ptr-3) << endl;
    cout << *(ptr+1) << endl;
    cout << array[5] << endl;
    cout << *(ptr+5) << endl;

    return;
}