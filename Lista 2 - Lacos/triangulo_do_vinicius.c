#include <stdio.h>

int main(){

    char fim=0, ponto, flag=0;
    scanf("%c", &fim);
    int ponteiro=fim-64;

    int linha, coluna;
    for(int linha=1; linha <= ponteiro; linha++){
        ponto = ponteiro - linha;
        int letra = 1, flag = 0;
        for(int coluna=1; coluna <= ((ponteiro * 2) -1); coluna++){
            if((coluna <= ponto) || coluna > (((ponteiro * 2) -1) - ponto)){
                printf(".");
            }else{
                if(letra == linha){
                    flag=1;
                }
                printf("%c", letra+64);
                if(flag == 0){
                    letra++;
                }else{
                    letra--;
                }
            }
        }
        printf("\n");
    }

    return 0;
}