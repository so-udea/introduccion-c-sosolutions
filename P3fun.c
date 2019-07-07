#include <stdio.h>
#include <math.h>
 
int main()
{
    int x,m;
    
   int factorial(int x){

   int b;
 
   int fact = 1;

    b = x ;

    for (int i = 1; i <= b; i++){

            fact = fact * i;

    }

    return fact;

}
    
    double serie (int x, int m){
        
        double resultado=1;
        
        int aux=2;
        for (int i=2;i<=m;i++){
            
            if((i%2)==0){
                resultado = resultado - (double)((pow(x,aux))/factorial(aux));
               
                
            }else{
                resultado = resultado + (double)((pow(x,aux))/factorial(aux));
                
                
            }

            aux =aux +2;

           
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