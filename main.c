#include <stdio.h> // Bibliotecas
#include <math.h>

// COMEÇO DA FUNÇÃO
float raiz(float n){ 
    float chute = 0, passo = 1; // Declarando Chute e Passo
    
    int i; // Declara uma váriavel para usar na Função
    
    for(i=0; i<6; i++){ // Loop
        
        //FUNÇÃO USANDO FOR
        //for(chute = 0; chute * chute <= n; chute++);
    
         // FUNÇÃO USANDO WHILE
        while(chute*chute <= n) // Conta da Raiz Quadrada
        {
            chute = chute + passo;
        }
        
        chute = chute - passo;
        passo = passo / 10;
    }
    
    return chute; // Retorna o Resultado Final
    
}
// FIM DA FUNÇÃO 




// COMEÇO DO PROGRAMA PRINCIPAL
int main()
{   
    float n; // Declara Var N 
    
    printf("Entre com N: "); // Pede para o Usuário Digitar um Número
    scanf("%f", &n); // Lê o Número Digitado e armazena na Var N
    
    printf("\n%.3f", raiz(n)); // Imprime o Resultado

    return 0; // Encerra o Programa
}
// FIM DO PROGRAMA PRINCIPAL
