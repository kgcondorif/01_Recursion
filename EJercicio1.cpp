#include <iostream>

using namespace std;
int potencia(int, int);

int main (){
    int n, x, result;

    cout << "Calcular potencia de un numero" << endl;
    cout << "Ingrese el numero: ";
    cin >> n;
    cout << "Ingrese la potencia: ";
    cin >> x;

    result = potencia(n, x);
    cout << "El resultado es: " << result << endl;

    return 0;   
}

int potencia(int n, int x){
    if (x == 0){
        return 1;
    } else {
        return n * potencia(n, x - 1);
    }
}