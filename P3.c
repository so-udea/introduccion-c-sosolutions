#include <stdio.h>

int main() /*Main */
{
	int numr; /*Declaración de variable */

	printf ("Introduce el número de renglones: ");/*Preguntamos por el número de renglones */
	scanf ("%d", &numr); /*Guardamos el valor ingresado en nuestra variable */ 

	int prim = 1; /*Inicializamos el primer valor en 1 */
	
	for (int i =1; i <= numr; i ++) /*Manejamos el ciclo que se va a repetir dependiendo de los renglones ingresados */
	{
		int ini = prim; /*Inicializamos el valor inicial con prim */
			
			for(int j=1; j<=i;j++) /*Controlamos las veces que se va imprimir la secuncia */
			{
				printf("%d", ini); /*Imprimimos el valor de ini */

				if (j < i)   /*Iteramos el valor de ini*/
				{
               		if(ini == 1)
               		{
               			ini = 0;
            		}
               		else
                	{
                    	ini = 1;
                	}
                }  
            } 

                printf("\n");  /* Imprimimos el cambio de renglón*/

                if(prim == 1) /*Iteramos el valor de prim */
                {
            		prim = 0;
        		}
                else
                {
               		prim = 1;
                }      
        } 
 
     return 0; /*Terminamos nuestro programa */
}


