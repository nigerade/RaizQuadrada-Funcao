#include <stdio.h>
#include <math.h>

float raiz(float n){
    float chute = 0, passo = 1;
    
    int i;
    
    for(i=0; i<6; i++){
        
        //COM FOR
        //for(chute = 0; chute * chute <= n; chute++);
    
         // COM WHILE
        while(chute*chute <= n)
        {
            chute = chute + passo;
        }
        
        chute = chute - passo;
        passo = passo / 10;
    }
    
    return chute;
    
}
        

int main()
{   
    float n;
    
    printf("Entre com N: ");
    scanf("%f", &n);
    
    printf("\n%.3f", raiz(n));

    return 0;
}