#include <iostream>
using namespace std;

int main(){

    int pi = 3.14159;
    int radio{};

    cout << "Indique el valor del radio: "; cin >> radio;
    cout << "El diametro es: "; << radio * radio << endl;
    cout << "La circunferencia es: "; cout << 2*pi*radio << endl;
    cout << "El area es: "; cout << pi * (radio * radio) << endl;

    return 0;

}