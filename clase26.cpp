
#include <iostream>
using namespace std;
 float factorial(int x, float *puntero);

int main () {
  int x = 6; // numero al que se le va a hacer el factorial 
	float *puntero;
   puntero = new float[x]; // se crea un float del tamaño de x
  
    factorial(x,puntero); // ejecuto la funcion factorial
  
   return 0;
}
 
float factorial (int x,float *puntero){ // creo la función factorial
	for (int i=0;i<x;i++){
		if(i==0 ) //  si el valor i es 0 retornar 1
		{ puntero[i] =1;} 
        else if(i==1 ) // si el valor de i es igual a 0 retornar 1
		{ puntero[i] =1;}
		else
		{
			puntero[i]=1;
		for (int j=2;j<=i;j++){ // si hay numeros mayores de 1 realizar el factorial
			
			puntero[i]*=j;
		}
			
		}
		cout << "el factorial de"<<" "<< i << " "<< "es" <<" "<< puntero[i] << endl	; // imprime los valores de factorial que seran llamados en el main
	}
	return 0.0;
	

}
