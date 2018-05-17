//Se incluyen las librerias stdio, stdlib y time
//Se inicializa la funcion votacion con los dos numeros a ser generados al azar
//Se inicializan las variables ganadas, perdidas, empates y votos nulos
//En la funcion votacion se generan numeros al azar y se contabilizan segun la opcion ingresada (A o B)
//En la funcion main se llama a la funcion votacion
//Fin del algoritmo





#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int votacion(){
	int num1;
	int num2;
 
	char finalizar;
	char voto;	
	int ganadas=0;
	int perdidas=0;
	int empates=0;
	int votosnulos=0;
	while (1){
			printf("Presione A si elige la opcion 1, o B si escoge la opcion 2 :\n");
			scanf(" %c",&voto);
			num1=(rand() %10)+1; 
			num2=(rand() %10)+1;
		if (voto=='A'|| voto=='a'){
				printf("Usted ha escogido la opcion 1\n");
				printf("El numero 1 es: %d y el numero 2 es: %d\n",num1, num2);
				if (num1>num2){
					printf("USTED HA GANADO, FELICITACIONES!!\n");
					ganadas++;
				}
				if (num1<num2){
					printf("USTED PERDIO, LO LAMENTAMOS :c\n");
					perdidas++;
				}
				if (num1==num2){
					printf("Los numeros son iguales \n");
					empates++;
				}
				printf("Presione n o N si no quiere seguir jugango:\n");
				printf("Para seguir ingrese cualquier tecla\n");
				scanf(" %c",&finalizar);
					if (finalizar=='n' || finalizar=='N'){
						break;
					}
			}
		else if (voto=='B'|| voto=='b'){
				printf("Usted ha escogido la opcion 2\n");
				printf("El numero 1 es: %d y el numero 2 es: %d\n",num1, num2);
				if (num1<num2){
					printf("USTED HA GANADO, FELICITACIONES!!\n");
					ganadas++;
				}
				if (num1>num2){
					printf("USTED PERDIO, LO LAMENTAMOS :c\n");
					perdidas++;
				}
				if (num1==num2){
					printf("Los numeros son iguales \n");
				    empates++;
				}
				printf("Para finalizar presione N\n");
				printf("Para seguir ingrese cualquier tecla\n");
				scanf(" %c",&finalizar);
					if (finalizar=='n' || finalizar=='N'){
						break;
					}
			}
		else if (voto!='A'|| voto!='a' || voto!='B'|| voto!='b'){
				printf("Opcion no valida.\n");
				votosnulos++;
			}
		
		
		}
	printf("Usted gano %d veces.\n",ganadas);
	printf("Usted perdio %d veces.\n",perdidas);
	printf("Usted empato %d veces.\n",empates);
	printf("Hubieron %d votos no validos.\n",votosnulos);
	return 1;
	}
	
	
int main(){
	srand (time (0));
	votacion();
	return 0;
}
