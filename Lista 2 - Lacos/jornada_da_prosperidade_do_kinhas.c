#include <stdio.h>

int main(){

    int contador_movimentos=0, tamanho, quantidade_movimentos, experiencia=0, moedas=0, vale=0;

    scanf("%d %d", &quantidade_movimentos, &tamanho);

    for(int i=0; i < quantidade_movimentos;){
        for(int j=0; (j<tamanho && i<quantidade_movimentos); j++){
            int primo = 0;
            for(int k = 2; k < j; k++){
                if(j%k == 0){//verificar primo
                    primo = 1;
                }
            }
            if((primo==0 && j >= 2)){
                experiencia += j;
                printf("%d ", j);
            }
            if(j == 7){
                vale++;
            }
            i++;
        }
    }
   
    if(vale>0){
        moedas = 1;
        for(int i=1; i <= vale; i++){
            moedas = moedas*i;
        }
    }
    printf("\nExperiencia = %d Moedas = %d\n", experiencia, moedas);
    if(moedas == 0){
        printf("Ja que nao achei moedas, vou na Torre\n");
        if(experiencia > 0){
            for(int i=1; i<=experiencia; i++){
                if((i%7 == 0) && i > 1){
                    printf("%d ", i);
                    moedas += 30;
                }
            }
        printf("\nConsegui %d moedas na Torre\n", moedas);
        }else
            printf("Desisto.\n");
        
    }
    return 0;
}