#include <stdio.h>
int main()/* Función main*/
{
	int n,num, res; /*Declaramos las variable*/
	printf("Ingrese el número del que quiere generar la tabla: \n");/*Pedimos al usuario que ingrese el número del que se generará la tabla */
	scanf("%d",&num); /*Guardamos dicho número en nuestra variable */
	printf("Ingrese hasta qué número desea generar la tabla: \n"); /*Pedimos al usuario ingresar hasta qué número desea hacer la multiplicación */
	scanf("%d", &n); /*Guardamos el valor ingresado en nuestra variable */


	for(int i =1; i <= n; i++) /*Corremos el ciclo desde 1 hasta el número que se desea hacer la multiplicación */
	{    
		res= num * i;         /*Generamos el resultado de la multiplicación */
		printf("%dx%d=%d\n",i,num,res); /*Mostramos ordenadamente la tabla de multiplicación de 1 hasta el número ingresado */
	}

	return 0;/*Finalizamos el programa */
}