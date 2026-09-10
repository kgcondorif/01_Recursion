#include <iostream>

using namespace std;

int base(int);

int main (){
    int n, result;

    cout << "Convertir numero a base 2" << endl;
    cout << "Ingrese el numero en base 10   : ";
    cin >> n;

    result = base(n);
    cout << "El numero en base 2 es: " << result << endl;

    return 0;   
}

int base(int n){
    if (n == 0){
        return 0;
    } else {
        return (n % 2) + 10 * base(n / 2);
    }
}