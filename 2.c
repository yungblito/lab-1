#include <stdio.h> 
//Se inicia el algoritmo
//Se declara la variable votos de tipo int
//Se declara la variable cantidada de tipo int para la cantidad de amigos
//Se declara la variable cuentaa de tipo int  para el precio inicial de la cuenta
//Se declara la variable totala de tipo int para la cantidad final de amigos
//Se declara la variable cuentai de tipo int para el iva de la cuenta
//Se declara la variable cuentap de tipo int para la propina de la cuenta
//Se declara la variable cuentat de tipo int para la cuenta final
//Se declara la variable d de tipo int para la cuenta final repartida en la cantidad final de amigos
//Se introduce la cantidad de amigos de pepe
//La cantidad total de amigos es el numero ingresado mas pepe
//Se introduce la cuenta
//Se calcula el iva y la propina
//Se reparte el total en el total de amigos
//Se imprimen los resultados
//Fin del algoritmo


int main()
{ 
	int cantidada, cuenta, totala, cuentai, cuentap, cuentat, d;
	printf("\n  PROGRAMA EJERCICIO 2 \n");
    printf("\n  Distribuidor de paga en restaurant\n");
    
    printf("\n  Introduzca la cantidad de amigos de Pepe \n ");
    scanf("%d",&cantidada);
    
    totala = cantidada + 1;
    
    printf("\n  Introduzca el total de la cuenta \n ");
    scanf("%d",&cuenta);

	cuentai = cuenta * 0.19;
	cuentap = cuenta * 0.1; 
	cuentat = cuentai + cuentap + cuenta;
	d = (cuentat / totala);
	
	if (cantidada != 0)
		{
		
		 printf("\n  La cantidad a repartirse es: %d \n",d);
		}
	printf("\n El total es %d \n",cuentat);
	printf("\n La cantidad correspondiente a propina es %d \n",cuentap);
	printf("\n La cantidad correspondiente al iva es %d \n",cuentai);
	return 0;
	
}
	

	
	
	
