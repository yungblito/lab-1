#include <stdio.h> 

//Se inicia el algoritmo
//Se declara la variable votos de tipo int
//Se declaran las variables c1, c2, c3 de tipo int para la cantidad de votos
//Se declaran las variables p1, p2, p3 de tipo float para el porcentaje de los votos
//Se declara la variable votos para el total de los votos
//Se pide un voto para el canditato 1, 2 o 3
//El algoritmo cuenta los votos hasta que se presiona la letra f
//El algoritmo termina y muestra los resultados, mencionando al ganador y su porcentaje respectivo
//Fin del algoritmo


int main()
{ 
	int  votos=0, c1=0, c2=0, c3=0, nulos=0;
	float p1, p2, p3, totalvotos=0;
	char fin='a';
	printf("\n  PROGRAMA EJERCICIO 1 \n");
    printf("\n  Contador votos elecciones utal\n");
	printf("\n  Introduzca su voto por el candidato 1, 2 o 3 \n ");
	
    
    while(fin!='f'){
		printf ("\n Voto:");
		scanf("%d",&votos);
		printf("\nPara finalizar ingrese la tecla f, para seguir presione enter \n ");
		
		if(votos==1)
		{
			c1++;
		}
		else if(votos==2)
		{
			c2++;
		}
		else if(votos==3)
		{
			c3++;
		}
		else 
		{
			nulos++;
		}		
		while (getchar() != '\n');
	
		scanf("%c", &fin);
		
	}

	totalvotos = c1 + c2 + c3 ;
	
	
	
	p1 = (c1 / (totalvotos)) * 100; 
    p2 = (c2 / (totalvotos)) * 100; 
    p3 = (c3 / (totalvotos)) * 100; 
    
	printf ("El total de votos es %.2f \n", totalvotos);
	printf ("El total de votos nulos es %d \n", nulos);


	if(c1 > c2 && c1 > c3) 
		{
		printf("Con un porcentaje del %.2f por ciento del total de los votos \n", p1);
		printf("El ganador es el candidato 1, !FELICITACIONES!");
			
		}
		else if(c2 > c3 && c2 > c1)
		{
		printf("Con un porcentaje del %.2f por ciento del total de los votos \n", p2);
		printf("El ganador es el candidato 2, !FELICITACIONES!");
			
		}
		else if(c3 > c1 && c3 > c2)
		{
		printf("Con un porcentaje del %.2f por ciento del total de los votos \n ", p3);
		printf("El ganador es el candidato 3, !FELICITACIONES!");
	}
	    else 
		{
		printf("Empate");
	    }
	return 0;
}					 

	
	
	
