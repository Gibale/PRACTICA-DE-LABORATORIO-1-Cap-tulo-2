#include <iostream>
using namespace std;

int main(){

    int a {};
    int b {};
    int x {};

    cout << "Ingrese un valor para a: "; cin >> a;
    cout << "El valor de a es: "; cout << a << endl;

    cout << "Ingrese un valor para b: "; cin >> b;
    cout << "El valor de b es: "; cout << b << endl;

    int suma {a+b};

    cout << "La suma de a y b es: "; cout << suma << endl;

    if (suma % 2 != 0)
        cout << "La suma es impar";
    else
        cout << "La suma es par";

    return 0;

}