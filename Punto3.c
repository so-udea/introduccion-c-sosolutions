#include <stdio.h>
#include <math.h>
 
int main()
{
    int x,m;
    
    float factorial (int x){
        float fact;
         for (int b = x; b > 1; b--){
             fact = fact * b;
         }
        return fact; 
    }
    
    float serie (int x, int m){
        
        float resultado=1;
        
        int aux=2;
        for (int i=0;i<m-1;i++){
            
            if(i%2==0){
                resultado = resultado - (pow(x,aux)/factorial(aux));
                aux=aux*2;
                printf("bandera 1");
            }else{
                resultado = resultado + (pow(x,aux)/factorial(aux));
                aux=aux*2;
                printf("bandera 2");
            }
        }
        printf("El resultado de la serie es: %f\n", resultado); 
        return resultado;
           
    }
    printf ("Ingrese el valor de X: "); //Leemos el número 
    scanf("%d", &x);
    printf ("Ingrese la cantidad de terminos : "); //Leemos el número 
    scanf("%d", &m);
    
    serie(x,m);
}