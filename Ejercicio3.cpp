#include <iostream>

using namespace std;

int busqueda(int [], int, int);

int main (){
    int n, x, result;

    cout << "Busqueda de un numero en un arreglo" << endl;
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

    cout << "Ingrese el numero a buscar: ";
    cin >> x;

    result = busqueda(arreglo, n, x);
    
    if (result == -1){
        cout << "El numero no se encuentra en el arreglo" << endl;
    } else {
        cout << "El numero se encuentra en la posicion: " << result + 1 << endl;
    }

    return 0;
}

int busqueda(int arreglo[], int n, int x){
    if (n == 0){
        return -1;
    } else if (arreglo[0] == x){
        return 0;
    } else {
        int result = busqueda(arreglo + 1, n - 1, x);
        if (result == -1){
            return -1;
        } else {
            return result + 1;
        }
    }
}