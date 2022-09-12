#include <iostream>
using namespace std;

int main(){

int first, second, third, fourth;
int number;

cout << "Insert a four digit number: "; cin >> number;

first = number/1000;
  second = (number/100)%10;
  third = (number/10)%10;
  fourth = number % 10;

cout << " " << fourth;
cout << " " << third;
cout << " " << second;
cout << " " << first;

    return 0;
}
