#include <stdio.h>

int main(){

    char vetor[10000]={0};

    int tamanho, deslocamento, i;
    scanf("%d", &tamanho);
    scanf("%s", vetor);
    scanf("%d", &deslocamento);

    for(i=0; i < tamanho; i++){
        vetor[i] = ((vetor[i] + deslocamento - 'a') % 26) + 'a';
        printf("%c", vetor[i]);
    }

    return 0;
}