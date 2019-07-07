#include <stdio.h>
#include <stdlib.h>

void multiplica(int x, int y); /*Inicializamos nuestro métodos */
int aleatorio();

int main() /*Main */
{
	int num1 = aleatorio(); /*Declaramos nuestras variables, asignandoles un valor pseudo-aleatorio */
	int num2 = aleatorio();
	multiplica(num1,num2); /*invocamos nuestro método */
	
}

int aleatorio() 		/*Definimos nuestro metodo aleatorio */
{						/*que nos devuelve un valor entero entre 0 y 9 */
	int x = rand() % 10;
	return x;
}

void multiplica(int x ,int y) /*Construimos nuestro método mutiplica */
{
	
	int res;			/*Declaramos nuestras variables */
	int salida, salidam;
	printf("Cuanto es %d veces %d: ",x,y); /*Imprimimos el mensaje de la pregunta */
	scanf("%d",&res);  /*Guardamos la respuesta en nuestra variable */

	if(res == (x * y))  /*Miramos si la respuesta es correcta */
	{
		printf("Muy bien!\n");
		printf("Ingresa '1' para continuar, o cualquier otro numero si quieres salir del programa: ");
		scanf("%d",&salida);  /*Felicitamos al estudiante, y preguntamos por la continuidad en el programa */

		if(salida == 1)  /*Si la respuesta es 1, volvemos a ejecutar el programa con nuevos números para mutiplicar */
		{
			x = aleatorio();
			y = aleatorio();
			multiplica(x,y);
		}
		else		/*Si es otra respuesta, terminamos el programa */
		{
			exit(0);
		}
	}
	else			
	{
		while(res != x * y) /*Nos quedamos en el ciclo hasta que responda correctamente, o quiera salir del programa */
		{
			printf("Incorrecto!, ingresa '1' si lo quieres intentar otra vez, o cualquier otro numero si deseas salir: ");
			scanf("%d",&salidam);
			if (salidam == 1)		/*Si la respuesta fue incorrecta, preguntamos por la continuidad en el programa */
			{						/*O si quiere repetir el ejercicio */
				printf("Cuanto es %d veces %d: ",x,y );
				scanf("%d",&res);				/*Volvemos a preguntar por el mismo ejercicio */
			}
			else
			{
				exit(0);  /*Nos salimos del programa a petición del usuario */
			}
			
		}
		
			printf("Muy bien!\n");   /*Si responde correctamente, volvemos a la misma situación de cuando es correcta */
			printf("Ingresa '1' para continuar, o cualquier otro numero si quieres salir del programa: ");
			scanf("%d",&salida);

			if(salida ==1)			/*Ejecutamos el método nuevamente, con nuevos números */
			{
				x = aleatorio();
				y = aleatorio();
				multiplica(x,y);
			}
			else				/*Terminamos el programa */
			{
				exit(0);
			}
		
	}
}
