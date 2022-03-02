#include <stdio.h>

int main(){

    int tamanho, termo1=1, termo2=1, proximo, contador=0;
    

    scanf("%d", &tamanho);
    int vetor_fibonacci[tamanho], vetor_comparador[tamanho];

    for(int i=0; i<=tamanho; i++){
        vetor_fibonacci[i] = termo1;
        proximo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximo;
    }

    for(int j=0; j<tamanho; j++){
        scanf("%d", &vetor_comparador[j]);
        contador++;
        if(vetor_fibonacci[j] != vetor_comparador[j]){
            printf("Sherliro achou o termo %d que deveria estar na posicao %d\n", vetor_fibonacci[j], contador);
            break;
        }
    }

    return 0;
}