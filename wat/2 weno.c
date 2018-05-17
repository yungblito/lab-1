//Se inicializa la funcion raiz_digital para determinar la raiz digital del numero ingresado
//En la funcion, la raiz digital se determina mediante division sucesiva del numero ingresado, tomando su resto y sumandoselo al numero ingresado dividido en 10
//En la funcion main se pide ingresar el numero a ser calculado
//En la funcion main se llama ahora la funcion raiz digital
//Se calcula la raiz digital y se escribe en pantalla
//Fin del algortimo





#include <stdio.h>
int raiz_digital(int n)
{
	if(n<=9)
		return(n);
	
	else
		return(raiz_digital((n%10) + raiz_digital(n/10)));
}


int main(){
	int a;

	printf("Introduzca un numero:\n");
	scanf("%d",&a);

	if(a<0)
		printf("El numero ingresado es negativo \n");

	else
	{
		printf("Su raiz digital es %d\n", raiz_digital(a));
	}
	return 0;
}
