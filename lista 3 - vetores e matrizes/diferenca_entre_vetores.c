#include <stdio.h>

int main(){

    int tamanho, x, vetor[100], vetor_ordenado[100], contador;
    
    do{
        scanf("%d %d", &tamanho, &x);
        if(tamanho == -1 && x == -1)
            break;

        for(int i=0; i < tamanho; i++){
            scanf("%d", &vetor[i]);
            vetor_ordenado[i] = vetor[i];
        }

        int k, j, auxiliar;

        for(k = 1; k<tamanho; k++){
            for(j=0; j<tamanho-1; j++){
                if(vetor_ordenado[j] > vetor_ordenado[j+1]){
                    auxiliar = vetor_ordenado[j];
                    vetor_ordenado[j] = vetor_ordenado[j+1];
                    vetor_ordenado[j+1] = auxiliar;
                }
            }
        }
        
        contador=0;
        for(int i=0; i<tamanho; i++){
            if(abs(vetor[i] - vetor_ordenado[i]) == x){
                contador++;
            }
        }

        printf("%d\n", contador);

        for(int i=0; i<tamanho; i++){
            if(abs(vetor[i] - vetor_ordenado[i]) == x){
                printf("%d %d %d\n", vetor[i], vetor_ordenado[i], i+1);
            }
        }

    }while(tamanho != -1 && x != -1);
    
    return 0;
}