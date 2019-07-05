#include <stdio.h>
int main()/* Función main*/
{
	int final; /*Declaramos la variable*/
	printf("Ingrese hasta qué número desea generar la tabla: \n"); /*Pedimos al usuario ingresar hasta qué número desea hacer la multiplicación */
	scanf("%d", &final); /*Guardamos el valor ingresado en nuestra variable */


	for(int i =1; i <= final; i++) /*Corremos el ciclo desde 1 hasta el número que se desea hacer la multiplicación */
	{                
		printf("1x%d=%d\n",i,i); /*Mostramos ordenadamente la tabla de multiplicación de 1 hasta el número ingresado */
	}

	return 0;/*Finalizamos el programa */
}