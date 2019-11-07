
#include <iostream>
using namespace std;
 float factorial(int x, double *puntero);

int main () {
  int x = 6; // numero al que se le va a hacer el factorial 
	double *puntero;
   puntero = new double[x]; // se crea un double del tamaño de x
  
    factorial(x,puntero); // ejecuto la funcion factorial
  
   return 0;
}
 
float factorial (int x,double *puntero){ // creo la función factorial
	for (int i=0;i<x;i++){
		if(i==0||i==1 ) // si el valor dado es 1 o 0 imprimir 1
		{ puntero[i] =1;}
		else
		{
			puntero[i]=1;
		for (int j=2;j<=i;j++){ // si hay numeros mayores de 1 realizar el factorial
			
			puntero[i]*=j;
		}
			
		}
		cout << puntero[i] << endl	; // guarda los valores de factorial que seran llamados en el main
	}
	return 0.0;
	

}