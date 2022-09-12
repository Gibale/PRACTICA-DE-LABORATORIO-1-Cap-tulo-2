#include <iostream>
using namespace std;

int main(){

int mpd, cpg, ampg, pfpd, tpd;
int mpg;
int total;

cout << "Total miles driven per day: "; cin >> mpd;
cout << "Cost per gallon of gasoline: "; cin >> cpg;
cout << "Average miles per gallon: "; cin >> ampg;
cout << "Parking fees per day: "; cin >> pfpd;
cout << "Tolls per day: "; cin >> tpd;

total = ((mpd * cpg) / ampg) + pfpd + tpd;

cout << "Your total cost per day is about: " << total;
    return 0;
}