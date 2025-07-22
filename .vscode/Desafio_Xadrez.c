#include <stdio.h>

void recursividade (int numero, char peca){
    int j, i;
    
    if (numero > 0){
         if (peca =='A'){
            printf("direita\n");
            recursividade (numero - 1, peca);
    }
    
        else if (peca == 'C'){
        printf("Esquerda\n");
        recursividade (numero - 1, peca);
    }
        else if (peca == 'B'){
        for(i = 0;i < numero; i++)
    {
            for(j = 0; j < numero;j++)
            {
                printf("Direita\n");
                break;
            }
    printf("Cima\n");

    }
        
    }
            else if (peca == 'D' && numero == 3){
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
        }
        
    }
}

int main() {
    
    int valor = 5;
    char peca = 'A';
    
    printf("A torre fez o seguinte movimento:\n");
    recursividade (valor, peca);
    
    peca = 'C';
    valor = 8;
    printf("A rainha fez o seguinte movimento:\n");
    recursividade (valor, peca);
    
    peca = 'B';
    valor = 5;
    printf("O bispo fez o seguinte movimento:\n");
    recursividade (valor, peca);
    
    peca = 'D';
    valor = 3;
    printf("O cavalo fez o seguinte movimento:\n");
    recursividade (valor, peca);
}
 
