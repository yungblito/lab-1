//Se inicia el algoritmo
//Declarar las variables a utilizar de tipo int
//Las demás variables de tipo int seran el numero ingresado y el resto
//Se ingresa el numero a ser invertido
//Mediante el uso de un while se calcula el numero invertido mediante una sucesión de divisiones del resto
//Se imprime en pantalla en numero invertido
//Fin del algoritmo

#include <stdio.h>

int main(){
	printf("INVERTIDORA DE NUMEROS \n");
	int numero, resto;

	printf("Ingrese un numero entero positivo : ");
	scanf("%d", &numero);
	printf("El numero invertido es : ");
	
  while ( numero > 0){
    resto = numero % 10;
    numero = numero / 10;
	printf("%d", resto);
  }
   
	

  return 0;

}
 
