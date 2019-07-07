#include <stdio.h>
#include <math.h> //Incluir la libreria Math que permitirá calcular potencias

int main()
{
    
    int x,n,resultado=0;
    
    int progresion (int a, int b){
        
        for(int k=0; k<=n;k++){        //Ciclo que definirá cuando se calculan todas las potencias
            resultado = resultado + pow(x,k); //Lo que haya en resultado se le suma la siguiente potencia, y así se va acumulando el resultado hasta n 
            
        }
        printf ("El resultado de la progresion es: %i\n",resultado);
        return resultado;
    }
     
    printf("Introduzca un numero entero X: "); 
    scanf("%d", &x);
    printf("Introduzca un numero entero N: ");
    scanf("%d", &n);

    progresion(x,n);
    
 
}