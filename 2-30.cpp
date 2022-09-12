#include <iostream>
using namespace std;

int main(){

float weight;
float height;
float bmi;
int option;

cout << "Type 1 if Pounds, type 2 if Kilograms: "; cin >> option;

if (option == 1) {
cout << "Enter your weight: ";cin >> weight;
cout << "Enter your height ";cin >> height;
bmi = (weight * 703) / (height * height);
cout << "Your body mass index is: " << bmi << endl;
}

else if (option == 2) {
cout << "Enter your weight: ";cin >> weight;
cout << "Enter your height "; cin >> height;
bmi = weight / (height * height);
cout << "Your body mass index is: " << bmi << endl;
}

if (bmi < 18.5) {

    cout << "You are Underweight";
}

else if (bmi >= 18.5, bmi <= 24.9) {

    cout << "You are Normal";
}

else if (bmi >= 25, bmi <= 29.9) {

    cout << "You are Overweight";

}

else if (bmi >= 30){

    cout << "You are Obese";
}

    return 0;

}

