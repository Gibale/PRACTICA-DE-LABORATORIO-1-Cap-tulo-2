#include <iostream>
using namespace std;

int main(){

int a{};
int e{};
int i{};
int o{};
int u{};

cout << "Ingrese el valor para a: "; cin >> a;
cout << "Ingrese el valor para e: "; cin >> e;
cout << "Ingrese el valor para i: "; cin >> i;
cout << "Ingrese el valor para o: "; cin >> o;
cout << "Ingrese el valor para u: "; cin >> u;

if (a > e, i, o, u){
    cout << "El numero mas grande es a: "; cout << a;
}
else if (e > a, i, o, u){
    cout << "El numero mas grande es e: "; cout << e;
}
else if (i > a, e, o, u){
    cout << "El numero mas grande es i: "; cout << i;
}
else if (o > i, a, e, u){
    cout << "El numero mas grande es o: "; cout << o;
}
else if (u > i, a, e, o){
    cout << "El numero mas grande es u: "; cout << u;
}

return 0;

}