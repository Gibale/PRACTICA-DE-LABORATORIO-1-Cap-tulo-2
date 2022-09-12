#include <iostream>
using namespace std;

int main (){

char a, b, c, d;

cout << "Enter 4 digits: "; cin >> a;
cout << "Enter 3 digits: "; cin >> b;
cout << "Enter 2 digits: "; cin >> c;
cout << "Enter 1 digit: "; cin >> d;

cout << "The integer value is: "; cout << static_cast<int>(a) << endl;
cout << "The integer value is: "; cout << static_cast<int>(b) << endl;
cout << "The integer value is: "; cout << static_cast<int>(c) << endl;
cout << "The integer value is: "; cout << static_cast<int>(d);

    return 0;
}
