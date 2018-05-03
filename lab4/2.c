//Se inicializa el algoritmo
//Se imprime en pantalla el enunciado de nuestro problema
//Se declaran las variables porcion_ind de tipo float para la variable de la porcion que se repartieron 
//Se declaran las variables dinerohuevos, juan y manuel de tipo int
//Se declaran las variables pagajuan, pagamanuel, porcionjuan y porcionmanuel de tipo float
//Se calcula la porcion de juan y de manuel
//Se calcula el dinero que le debe antonio a juan y manuel
//Se imprime en pantalla en dinero que antonio debe a juan y manuel
//Fin del algoritmo


#include <stdio.h>

int main() {
	printf("Juan, Antonio y Manuel se reparten 8 huevos en partes iguales \n");
	printf("Juan lleva 5 huevos, Manuel 3 y Antonio ninguno \n");
	printf("Llegan a un acuerdo de que Antonio debe pagar 80 pesos a Juan y Manuel \n");
	printf("¿Cuanto de los 80 pesos tendra que dar Antonio a Juan y cuanto a Manuel, \npara que el trato sea justo para los tres? \n");
	float porcion_ind=(2.66666666666);
	int dinerohuevos=80, juan=5, manuel=3;
	float pagajuan, pagamanuel, porcionjuan, porcionmanuel;
	porcionjuan = (juan - porcion_ind);
	porcionmanuel = manuel - porcion_ind;
	pagajuan = ((porcionjuan * dinerohuevos)/ (porcion_ind));
	pagamanuel = ((porcionmanuel * dinerohuevos)/ (porcion_ind));
	
	printf("Antonio le debe pagar %.0f a Juan y %.0f a Antonio", pagajuan, pagamanuel);
	
	return 0 ;

}
	
