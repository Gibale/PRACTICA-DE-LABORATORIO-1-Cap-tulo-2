#include <iostream>
using namespace std;

int main(){

int a, b, c;
int age;
int mayor;
int menor;

cout << "Insert your age: "; cin >> age;
cout << "MRH = " << 208 - 0.7 * age << endl;
cout << "MRH = " << 207 - 0.7 * age << endl;
cout << "MRH = " << 211 - 0.64 * age << endl;

a = 208 - 0.7 * age;
b = 207 - 0.7 * age;
c = 211 - 0.64 * age;

if (a > b){
    mayor = a;
    menor = b;
}

if (mayor > c){
    cout << "The largest result is: " << mayor;

}

else {

    mayor = c;
    cout << "The largest result is: " << mayor << endl;
    cout << "The smaller result is: " << menor;
}

    return 0;
}