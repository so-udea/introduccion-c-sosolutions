#include <stdio.h>
#include <stdlib.h>

int  moneda();
void caraSello(int x); /*Inicializamos nuestro método */

int main() /*Main */
{
	int nlan; /*Declaramos variables */

	printf("Ingrese la cantidad de lanzamientos que desea generar: ");/*Pedimos al usuario ingresar la cantidad de lanamientos de la moneda  */
	scanf("%d",&nlan); /*Guardamos ese valor en nuestra variable */
	caraSello(nlan); /*Ejeutamos nuestro método como argumento */
	
	return 0; /*finalizzamos nuestro main */
}

void caraSello(int x) /*Definimos nuestra función caraSello */

{
	int caras=0;  /*Inicializamos los contadores de nuestras variables en 0 */
	int sellos=0;
	for(int i=1; i<= x; i++) /*Controlamos la veces que se van a imprimir los resultados teniendo en cuenta el número de lanzamientos */
	{

		
		int valor = moneda(); /*Generamos un # aleatorio entre 0 y 1 y se lo asignamos a valor*/
		if(valor == 0)
		{
			printf("C"); /*Si se cumple la condición imprimimos C de cara */
			caras ++;	/*Aumentamos el contador de caras en 1 */
		}
		else  /* Si se da el otro valor, imprimimos la S de sello, y aumentamos su contador */
		{
			printf("S");
			sellos ++;	
		}


	}

	printf(", # de caras= %d, # de sellos = %d\n",caras,sellos ); /*Imprimimos todo el mensaje */

}

int moneda() /*Creamos el método que me simula el lanzamiento de la moneda */
{
	int lanzamiento = rand() % 2; /*Generamos un valor aleatorio entre 0 y 1 */
	return lanzamiento; /*Retornamos el valor de ese resultado */
}








