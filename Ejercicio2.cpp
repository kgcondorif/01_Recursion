#include <iostream>

using namespace std;

int suma(int [], int);

int main (){
    int n, result;

    cout << "Calcular suma de un arreglo de numeros" << endl;
    cout << "Ingrese la longitud del arreglo: ";
    cin >> n;

    int arreglo[n];

    for (int i = 0; i < n; i++){
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    result = suma(arreglo, n);
    cout << "El resultado es: " << result << endl;

    return 0;
}

int suma(int arreglo[], int n){
    if (n == 0){
        return 0;
    } else {
        return arreglo[0] + suma(arreglo + 1, n - 1);
    }
}