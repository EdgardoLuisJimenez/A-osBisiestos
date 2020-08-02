/*Año Bisiesto:
 * El siguiente programa lee por teclado un año y calcula y muestra si es bisiesto.
 * Para realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto
 * recibe el año leído por teclado, comprueba si es o no bisiesto y devuelve 1 si lo es
 * ó 0 si no lo es.
 *
 * Año bisiesto:
 * Es bisiesto si es divisible entre 4 y
 * cuando no es divisible entre 100 ó cuando
 * es divisible entre 400
 */

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de la funcion
void pedirDatos(int&);//Se utiliza el parametro por referencia para poder cambiarlo 
int verificador(int);
void imprimirPantalla(int);

int main(){
    int anio,num;
    pedirDatos(anio);
    cout<<anio<<endl;
    num = verificador(anio);
    imprimirPantalla(num);


    getch();
    return 0;
}
//Definicion de la funcion
void pedirDatos(int& anio){
    cout<<"Digite el anio a verificar: ";
    cin>>anio;
}
int verificador(int anio){
    int num;
    if((anio%4 == 0) && ((anio%100 != 0) || (anio%400 == 0))){
        num = 1;
    }
    else{
        num = 0;
    }
    return num;
}
void imprimirPantalla(int anio){
    if(anio == 1){
        cout<<"El anio es bisiesto ";
    }
    else{
        cout<<"El anio no es bisiesto ";
    }
}