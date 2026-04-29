#include <iostream>
using namespace std;

int main() {
    int a; 
    cout << sizeof(a) << endl;
    cout << "int: " << sizeof(int) <<  endl;
    cout << "long: " << sizeof(long) <<  endl;
    cout << "char: " << sizeof(char) <<  endl;
    cout << "bool: " << sizeof(bool) <<  endl;
    cout << "float: " << sizeof(float) <<  endl;
    cout << "double: " << sizeof(double) <<  endl;
    
    cout << &a << endl; //direccion de memoria
    cout << a << endl;  //el valor
    cout << *(&a) << endl;

    // Líneas de punteros (direcciones de memoria)
    cout << "puntero int: " << sizeof(int*) << endl;
    cout << "puntero float: " << sizeof(float*) << endl;
    cout << "puntero long: " << sizeof(long*) << endl;
    cout << "puntero char: " << sizeof(char*) << endl;
    cout << "puntero bool: " << sizeof(bool*) << endl;
    cout << "puntero double: " << sizeof(double*) << endl;

    int* direccion;
    cout << direccion << endl; //valor 
    cout << &direccion << endl; //direccion
    cout << *direccion  << endl; //indirreccion

    return 0;
}