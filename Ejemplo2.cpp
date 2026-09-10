#include <iostream>
using namespace std;

int MCD(int x, int y); //prototipo de la función 

int main(){ //función principal del programa
    int v1, v2;
    cout<<"\tPrograma para calculo de Maximo Comun Divisor de 2 numeros enteros";
    cout<<endl<<"Introduzca el primer valor entero: "; cin>>v1; 
    cout<<endl<<"y ahora el segundo valor entero: "; cin>>v2; 
    cout<<endl<<endl<<"Resultado:   El MCD de "<<v1<<" y "<<v2<<" es:\t"; 
    cout<<MCD(v1, v2);
    return 0;
}

int MCD(int x, int y){
    if(y == 0) //Condición de parada de recursividad
        return x;
    else
        return MCD(y, x%y);
}