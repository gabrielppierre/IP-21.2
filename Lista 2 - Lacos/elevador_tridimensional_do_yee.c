#include <stdio.h>

int main(){

    int x=0, y=0, z=0, n, m;
    int xi=0, yi=0, zi=0;
    int dec=0, contador_movimentos=0;
    int i, j;
    scanf("%d %d", &n, &m);
    
    for(i=0; i < n * 4; i++){
        scanf("%d", &dec);
        z = dec%10;//145
        dec = dec/10;//14
        y = dec%10;//14
        dec = dec/10;
        x = dec;
        int aux = xi - x;
        if(aux > 0){
            contador_movimentos += aux;
            for(int j=0; j<aux; j++)
                printf("e");
        }else{
            contador_movimentos += (aux * (-1));
            for(int j=0; j>aux; j--)
                printf("d");
        }
        xi=x;

        aux = yi - y;
        if(aux > 0){
            contador_movimentos += aux;
            for(j=0; j<aux; j++)
                printf("b");
        }else{
            contador_movimentos += (aux * (-1));
            for(j=0; j>aux; j--)
                printf("c");
        }  
        yi=y;

        aux = zi - z;
        if(aux > 0){
            contador_movimentos += aux;
            for(j=0; j<aux; j++)
                printf("t");
        }else{
            contador_movimentos += (aux * (-1));
            for(j=0; j>aux; j--)
                printf("f");
        }
        zi=z;

        printf("\nEntregue %d no quarto %d%d%d com %d movimentos\n", i+1, x,y,z, contador_movimentos);

        if(contador_movimentos >= m){
            printf("Faltou combustivel e foram entregues %d pessoas.\n", i+1);
            printf("Fim do teste. Obrigado Kanye West!");
            return 0;
        }
    }
    printf("Todas as pessoas foram entregues.\n");
    printf("Fim do teste. Obrigado Kanye West!");
    return 0;
}