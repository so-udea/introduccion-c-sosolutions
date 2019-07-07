#include <stdio.h>

int main()
{
    
    int a,b;
    
    int multiplo (int a, int b){   //Funcion para retornar si b es multiplo de a o no
        if (b%a == 0){ //La operacion % permite determinar el residuo 
            
            printf("B es multiplo de A");
            return 1;
        }else{
            printf("B no es multiplo de A ");
            return 0;
        }
    }
    //Prueba de la funcion multiplo 
    printf("Introduzca un numero entero A: ");
    scanf("%d", &a);
    printf("Introduzca un numero entero B: ");
    scanf("%d", &b);

    multiplo(a,b);
    
 
}