#include<iostream>
using namespace std;

int main(){
    int a = 10;
    cout << "Value of a" << a << endl;
    cout << "Address of a" << &a << endl;
    a += 3;
    cout << "Value of NEW a" << a << endl;
    cout << "Address of NEW a" << &a << endl;

    int *pa = &a;
    cout << "Value of pa" << pa << endl;
    cout << "Address of pa" << &pa << endl;
}