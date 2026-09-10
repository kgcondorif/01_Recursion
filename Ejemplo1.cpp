#include <iostream>
using namespace std;


// prototipo de función factorial 
long int factorial (int n);
// parámetro  n: ingreso del número para calcular su factorial
// valor devuelto: factorial del parámetro de entrada n 


int main (){
    int n;
    //Leer la cantidad entera ingresada por el usuario
    cout<<"Calcula el factorial de un numero entero positivo"<<endl;
    //Valida si el número ingresado es entero positivo
    do{
        cout<<endl<<"Digite un numero entero positivo: ";
        cin>>n;
        if(n < 0)
            cout<<endl<<"-> error, ingreso valor negativo, intente de nuevo..";
    } while(n<0);
    
    //Calcula y visualiza el factorial 
    cout<<endl<<n<<"! = "<< factorial(n); 
    return 0;
}


//Definición de la función factorial 
long int factorial(int n){
    if((n == 0) || (n == 1)){ 
        //caso base o condición de parada: de retorno de función
        return(1);
    }
    else{
        /*Recursividad: Se vuelve a llamar la función factorial con
        un problema más simple: factorial del término anterior n-1 al n actual*/
        return (n * factorial(n-1));
    }
}