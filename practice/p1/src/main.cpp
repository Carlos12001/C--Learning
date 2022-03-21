/******************************************************************************
Problema:  dados dos números enteros, ¿la tarea es encontrar el recuento de todos los divisores comunes de números dados?
Entrada: a = 12, b = 24
Salida: 6 todos los divisores comunes son 1, 2, 3, 4, 6 y 12
Entrada: a = 3, b = 17 Salida: 1,todos los divisores comunes son 1
Entrada: a = 20, b = 36 Salida: 3, todos los divisores comunes son 1, 2, 4
*******************************************************************************/

#include <iostream>
#include <list>
using namespace std;


list<int>maximun_commun_product(int num1, int num2){
    list<int> factors;
    int max_num = num1 > num2 ? num1 : num2;
    for(int factor = 1; factor <= max_num/2; factor++){
        if ((num1%factor==num2%factor) && num1%factor==0 && num2%factor==0){
            factors.push_back(factor);
        }
    }
    return factors;
}

int num_of_mcp(int num1, int num2){
    return (maximun_commun_product(num1, num2)).size();
}

int main(){
    cout << num_of_mcp(12, 24) << endl;
    return 0;
}