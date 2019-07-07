#include <stdio.h>

 
int main()
{
    int numero;
    int aux;
    printf ("Ingrese el entero a reversar: "); //Leemos el número 
    scanf("%d", &numero);
    
    int reversar(int numero){  //Funcion para reversar el numero
        
            aux = numero % 10;  //Guardamos el ultimo digito que será el primero 
            
            while (numero>10) {
                numero /= 10;   //Actualizamos el numero ya que cada que liberemos un dijito debemos dividir entre 10
                aux = ((aux*10) + (numero%10));  //Auxiliar va acumulando los digitos que salen del numero
            }
             
            return numero;
            
    }
    
    reversar(numero);
    
    printf("Resultado de la suma: %i\n",aux);
    
}
