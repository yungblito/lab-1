//Se inicializa un separador de las unidades del numero de 4 digitos ingresado, separandolas por el principio MCDU
//Los digitos son separados e identificados por las letras a, b, c, d
//Los digitos separados ahora pasan por una función que determina el mayor numero posible a formar con los digitos del numero ingresado
//La funcion analiza las 24 combinaciones posibles (4!) y entrega el mayor numero que se puede formar mediante el uso de la condicional if
//Los digitos separados ahora pasan por una función que determina el menor numero posible a formar con los digitos del numero ingresado
//La funcion analiza las 24 combinaciones posibles (4!) y entrega el menor numero que se puede formar mediante el uso de la condicional if
//En la funcion main ahora se llama al separador que ejecuta todas las acciones descritas anteriormente
//Se imprime en pantalla el numero ingresado junto con el mayor y menor numero posible a ser formado
//Fin del algoritmo




#include <stdio.h> 
 
int numero_mayor(int a, int b, int c, int d){
	
if (a>=b && b>=c && c>=d){									//1
printf("El numero mayor sera %d %d %d %d\n", a,b,c,d);
}
else if (a>=b && b>=d && d>=c){								//2
printf("El numero mayor sera %d %d %d %d\n", a,b,d,c);
}
else if (a>=c && c>=d && b>=d){
printf("El numero mayor sera %d %d %d %d\n", a,c,b,d);	//3
}
else if (a>=d && d>=b && b>=c){
printf("El numero mayor sera %d %d %d %d\n", a,d,b,c);	//4	
}
else if (a>=c && c>=d && d>=b){
printf("El numero mayor sera %d %d %d %d\n", a,c,d,b);	//5
}
else if (a>=d && d>=c && c>=b){
printf("El numero mayor sera %d %d %d %d\n", a,d,c,b);	//6
}
else if (b>=a && a>=c && c>=d){
printf("El numero mayor sera %d %d %d %d\n", b,a,c,d);	//7
}
else if (b>=a && a>=d && d>=c){
printf("El numero mayor sera %d %d %d %d\n", b,a,d,c);	//8
}
else if (c>=a && a>=b && b>=d){
printf("El numero mayor sera %d %d %d %d\n", c,a,b,d);	//9
}
else if (d>=a && a>=b && b>=c){
printf("El numero mayor sera %d %d %d %d\n", d,a,b,c);	//10
}
else if (c>=a && a>=d && d>=b){
printf("El numero mayor sera %d %d %d %d\n", c,a,d,b);	//11
}
else if (d>=a && a>=c && c>=b){
printf("El numero mayor sera %d %d %d %d\n", d,a,c,b); 	//12
}
else if (b>=c && c>=a && a>=d){
printf("El numero mayor sera %d %d %d %d\n", b,c,a,d);	//13	
}
else if (b>=d && d>=a && a>=c){
printf("El numero mayor sera %d %d %d %d\n", b,d,a,c);	//14
}
else if (c>=b && b>=a && a>=d){
printf("El numero mayor sera %d %d %d %d\n", c,b,a,d);	//15
}
else if (d>=b && b>=a && a>=c){
printf("El numero mayor sera %d %d %d %d\n", d,b,a,c);	//16
}
else if (c>=d && d>=a && a>=b){
printf("El numero mayor sera %d %d %d %d\n", c,d,a,b);	//17
}
else if (d>=c && c>=a && a>=b){
printf("El numero mayor sera %d %d %d %d\n", d,c,a,b);	//18
}
else if (b>=c && c>=d && d>=a){
printf("El numero mayor sera %d %d %d %d\n", b,c,d,a);	//19
}
else if (b>=d && d>=c && c>=a){
printf("El numero mayor sera %d %d %d %d\n", b,d,c,a);	//20
}
else if (d>=b && b>=c && c>=a){
printf("El numero mayor sera %d %d %d %d\n", d,b,c,a);	//21
}
else if (c>=b && b>=d && d>=a){
printf("El numero mayor sera %d %d %d %d\n", c,b,d,a);	//22
}
else if (c>=d && d>=b && b>=a){
printf("El numero mayor sera %d %d %d %d\n", c,d,b,a);	//23
}
else if (d>=c && c>=b && b>=a){
printf("El numero mayor sera %d %d %d %d\n", d,c,b,a);	//24
}
else{
printf("lava");
}
return 1;
}

int numero_menor(int a, int b, int c, int d){
	
if (a<=b && b<=c && c<=d){									//1
printf("El numero menor sera %d %d %d %d\n", a,b,c,d);
}
else if (a<=b && b<=d && d<=c){								//2
printf("El numero menor sera %d %d %d %d\n", a,b,d,c);
}
else if (a<=c && c<=d && b<=d){
printf("El numero menor sera %d %d %d %d\n", a,c,b,d);	//3
}
else if (a<=d && d<=b && b<=c){
printf("El numero menor sera %d %d %d %d\n", a,d,b,c);	//4	
}
else if (a<=c && c<=d && d<=b){
printf("El numero menor sera %d %d %d %d\n", a,c,d,b);	//5
}
else if (a<=d && d<=c && c<=b){
printf("El numero menor sera %d %d %d %d\n", a,d,c,b);	//6
}
else if (b<=a && a<=c && c<=d){
printf("El numero menor sera %d %d %d %d\n", b,a,c,d);	//7
}
else if (b<=a && a<=d && d<=c){
printf("El numero menor sera %d %d %d %d\n", b,a,d,c);	//8
}
else if (c<=a && a<=b && b<=d){
printf("El numero menor sera %d %d %d %d\n", c,a,b,d);	//9
}
else if (d<=a && a<=b && b<=c){
printf("El numero menor sera %d %d %d %d\n", d,a,b,c);	//10
}
else if (c<=a && a<=d && d<=b){
printf("El numero menor sera %d %d %d %d\n", c,a,d,b);	//11
}
else if (d<=a && a<=c && c<=b){
printf("El numero menor sera %d %d %d %d\n", d,a,c,b); 	//12
}
else if (b<=c && c<=a && a<=d){
printf("El numero menor sera %d %d %d %d\n", b,c,a,d);	//13	
}
else if (b<=d && d<=a && a<=c){
printf("El numero menor sera %d %d %d %d\n", b,d,a,c);	//14
}
else if (c<=b && b<=a && a<=d){
printf("El numero menor sera %d %d %d %d\n", c,b,a,d);	//15
}
else if (d<=b && b<=a && a<=c){
printf("El numero menor sera %d %d %d %d\n", d,b,a,c);	//16
}
else if (c<=d && d<=a && a<=b){
printf("El numero menor sera %d %d %d %d\n", c,d,a,b);	//17
}
else if (d<=c && c<=a && a<=b){
printf("El numero menor sera %d %d %d %d\n", d,c,a,b);	//18
}
else if (b<=c && c<=d && d<=a){
printf("El numero menor sera %d %d %d %d\n", b,c,d,a);	//19
}
else if (b<=d && d<=c && c<=a){
printf("El numero menor sera %d %d %d %d\n", b,d,c,a);	//20
}
else if (d<=b && b<=c && c<=a){
printf("El numero menor sera %d %d %d %d\n", d,b,c,a);	//21
}
else if (c<=b && b<=d && d<=a){
printf("El numero menor sera %d %d %d %d\n", c,b,d,a);	//22
}
else if (c<=d && d<=b && b<=a){
printf("El numero menor sera %d %d %d %d\n", c,d,b,a);	//23
}
else if (d<=c && c<=b && b<=a){
printf("El numero menor sera %d %d %d %d\n", d,c,b,a);	//24
}
else{
printf("lava");
}
return 1;
}
 
 
 int separador()
 {
	 int numero, a, b, c, d;
 
	 printf("Escribe un numero entero con 4 digitos: ");
	 scanf("%d", &numero);
 
	 if (numero >= 1000){
		 if (numero <= 9999){
			 a = numero / 1000;
			 b = (numero % 1000) / 100;
			 c = (numero % 1000) % 100 / 10;
			 d = ((numero % 1000) % 100) % 10 / 1;
	
		
		 }
	 }
	
	numero_menor(a, b, c, d);
	numero_mayor(a, b, c, d);
	return 0;
}




int main(){
	separador();

	return 0;
}

 
