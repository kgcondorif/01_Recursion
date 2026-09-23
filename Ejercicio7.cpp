#include <iostream>

using namespace std;

int espejo(int, int);
int logi(int);

int main() {
    int numero, reflejo, log;

    cout << "Calcular imagen especular" << endl;
    cout << "Ingrese un numero: ";
    cin >> numero;

    log = logi(numero);
    reflejo = espejo(numero, log);
    cout << "El espejo del numero es: " << reflejo << endl;
    
    return 0;
}

int logi(int n) {
    if (n < 10) {
        return 1;
    } else {
        return 10 * logi((n - n % 10) / 10);
    }
}

int espejo(int n, int p) {
    if (n < 10) {
        return n;
    } else {
        return (n % 10) * p + espejo((n - n % 10) / 10, p / 10);
    }
}