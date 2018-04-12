#include <stdio.h> 
//Se inicia el algoritmo
//Se declara la variable costotraje de tipo int para el precio inicial del traje
//Se declara la variable d de tipo int para el descuento de 15 por ciento
//Se declara la variable e de tipo int para el descuento de 8 por ciento
//Se discrimina segun el precio del traje, el descuento correspondiente
//Para valores sobre o de 250000 se hace un descuento del 15 por ciento
//Para valores bajo 250000 se hace un descuento del 8 por ciento
//Se imprimen el precio final
//Fin del algoritmo
int main()
{ 
	int costotraje, d, e;
	printf("\n  PROGRAMA EJERCICIO 3 \n");
    printf("\n  Calculadora precios traje\n");
    
    printf("\n  Ingrese el precio del traje\n ");
    scanf("%d",&costotraje);
    
    
    d = costotraje -  (costotraje * 0.15);
    e = costotraje -  (costotraje * 0.08);
    
    
    if (costotraje >= 250000)
		{
		 printf("\n  El precio finaldel traje es: %d pesos\n", d);
		}
		else if(costotraje < 250000)
		{
		printf("\n  El precio final del traje es: %d pesos \n", e);
		}
	return 0;
	
}
    
