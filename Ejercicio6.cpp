#include <iostream>

using namespace std;

int fibonacci(int);

int main (){
    int n, result;

    cout << "Calcular el numero de la serie 4, 6, 10, 16 ..." << endl;
    cout << "Ingrese la posicion del numero de la serie: ";
    cin >> n;

    result = fibonacci(n);
    cout << "El resultado es: " << result << endl;

    return 0;   
}

int fibonacci(int n){
    if (n == 1){
        return 4;
    } else if (n == 2){
        return 6;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}