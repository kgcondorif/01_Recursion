#include <iostream>

using namespace std;

int max(int [], int);

int main (){
    int n, mayor;

    cout << "Calcular el numero mayor de un arreglo" << endl;
    cout << "Ingrese la longitud del arreglo: ";
    cin >> n;

    int arreglo[n];

    for (int i = 0; i < n; i++){
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << "Arreglo ingresado: ";
    for (int i = 0; i < n; i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;
    
    mayor = max(arreglo, n);
    cout << "El mayor numero es: " << mayor << endl;

    return 0;
}

int max(int arreglo[], int n){
    if (n == 1){
        return arreglo[0];
    } else {
        int m = max(arreglo + 1, n - 1);
        if (arreglo[0] > m){
            return arreglo[0];
        } else {
            return m;
        }
    }
}