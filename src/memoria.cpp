#include <iostream>
using namespace std; 

int main() {
    int a = 5;
    cout << "int: " << sizeof(a) << endl;      
    cout << "long: " << sizeof(long) << endl;   
    cout << "char: " << sizeof(char) << endl;   
    cout << "bool: " << sizeof(bool) << endl;   
    cout << "float: " << sizeof(float) << endl; 
    cout << "double: " << sizeof(double) << endl; 
    
    cout << &a << endl;
    cout << a << endl;
    cout << *(&a) << endl;
    cout << sizeof(int*) << endl;
    cout<< sizeof(long*) << endl;
    cout<< sizeof(char*) << endl;
    cout<< sizeof(bool*) << endl;
    cout<< sizeof(float*) << endl;
    cout<< sizeof(double*) << endl;
    int* direccion;
    cout << direccion << endl;
    cout << & direccion << endl;
    cout << * direccion << endl;
    cout << malloc (4) << endl;
  int* dir = (int*) malloc(4);
  int* dir = (int*) malloc(sizeof(int));
    *dir = 7;
    cout << *dir << endl;
    int* dir2 = new int;
    return 0;
}