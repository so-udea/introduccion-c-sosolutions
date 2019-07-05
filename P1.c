#include <stdio.h>
int main() /* Función main*/
{
	int ventas,comi; /*Declaración de variables */
	printf("Ingrese las ventas del empleado: \n"); /*Pedimos al usario que ingrese las ventas del empleado */
	scanf("%d",&ventas); /*Guardamos el valor entero ingresado en la variable ventas*/

	if(ventas <= 20000) /*Preguntamos por el primer caso de ventas menor o igual a 20k */
	{
		comi = ventas* 0.05;  /*Si se cumple la condición, multiplicamos las ventas por 5%, y esto será su comisión */
	}
	else if (ventas >= 20001 && ventas <= 50000) /*Preguntamos por el segundo caso, si el valor está entre 20001 y 50000 incluyéndolos */
	{
		comi = ventas *0.07 + 1000; /*Si se cumple la condición multiplicamos sus ventas por 7% y le sumamos 1000 */
	}
	else
	{
		comi = ventas *0.10 + 3100; /*Si no se cumplen los casos anteriores, significa que sus ventas fueron mayores a 50k, por lo que genera la comisión señalada */
	}

	printf("La comisión del empleado es: %d\n",comi); /*Imprimimos el valor de la comisión del empleado */

	return 0; /*Terminamos el programa */


}