#include <stdio.h>

int main(){
    int a, b, c, flag=0, cont=0;
    scanf("%d %d %d", &a, &b, &c);

    if((a * a == c) && flag == 0){
        printf("Quadrado Vitoris\n");
        flag = 1;
        cont++;
    }else if((a % b == c) && flag == 0){
        printf("Resto Vitoris\n");
        flag = 1;
        cont++;
    }else if((a % b == c) && flag == 1){
        printf("tambem Resto\n");
        cont++;
    }
    if((a * b == c) && flag == 0){
        printf("Multi Vitoris\n");
        flag == 1;
        cont++;
    }else if((a * b == c) && flag == 1){
        printf("tambem Multi\n");
        cont++;
    }
    if((a / b == c) && flag == 0){
        printf("Div Vitoris\n");
        flag = 1;
        cont++;
    }else if((a / b == c) && flag == 1){
        printf("tambem Div\n");
        cont++;
    }
    if((a + b == c) && flag == 0){
        printf("Soma Vitoris\n");
        flag = 1;
        cont++;
    }else if((a + b == c) && flag == 1){
        printf("tambem Soma\n");
        cont++;
    }
    if((a - b == c) && flag == 0){
        printf("Sub Vitori\n");
        flag = 1;
        cont++;
    }else if((a - b == c) && flag == 1){
        printf("tambem Sub\n");
        cont++;
    }
    if(cont == 0)
        printf("Impossivel vitores\n");

    return 0;
}