#include <stdio.h>
int main(){
    int yoshis[4]={80, 100, 120, 80};
    int valores[4], moedas, r1, r2, r3, r4, cont=0;
    
    scanf("%d\n", &moedas);    
    for(int i=0; i<4; i++)
        scanf("%d", &valores[i]);

    r1 = yoshis[0]/ valores[0];
    r2 = yoshis[1]/ valores[1];
    r3 = yoshis[2]/ valores[2];
    r4 = yoshis[3]/ valores[3];

    for(int i=0; i<4; i++){
        if(moedas < valores[i])
            cont++;
        if(cont == 4){
            printf("Acho que vou a pe :(\n");
            return 0;
        }
    }

    if((r1 >= r2 && r2 >= r3 && r3 >= r4) || (r1 >= r2 && r2 >= r4 && r4 >= r3) || (r1 >= r3 && r3 >= r2 && r2 >= r4) &&  (r1 >= r3 && r3 >= r4 && r4>= r2) || (r1 >= r4 && r4 >= r3 && r3 >= r2) && (r1 >= r4 && r4 >= r2 && r2 >= r3)){
        printf("Verde\n");
        return 0;
    }else if((r2 >= r1 && r1 >= r3 && r3 >= r4) || (r2 >= r1 && r1 >= r4 && r4 >= r3) || (r2 >= r3 && r3 >= r1 && r1 >= r4) || (r2 >= r3 && r3 >= r4 && r4 >= r1) || (r2 >= r4 && r4 >= r1 && r1 >= r3) || (r2 >= r4 && r4 >= r3 && r3 >= r1)){
        printf("Vermelho\n");
        return 0;
    }else if((r3 >= r1 && r1 >= r2 && r2 >= r4) || (r3 >= r1 && r1 >= r4 && r4 >= r2) || (r3 >= r2 && r2 >= r1 && r1 >= r4) || (r3 >= r2 && r2 >= r4 && r4 >= r1) || (r3 >= r4 && r4 >= r1 && r1 >= r2) || (r3 >= r4 && r4 >= r2 && r2 >= r1)){
        printf("Roxo\n");
        return 0;
    }else if((r4 >= r1 && r1 >= r2 && r2 >= r3) || (r4 >= r1 && r1 >= r3 && r3>= r2) || (r4 >= r2 && r2 >= r1 && r1 >= r3) || (r4 >= r2 && r2 >= r4 && r3 >= r1) || (r4 >= r3 && r3 >= r1 && r1 >= r2) || (r4 >= r3 && r3 >= r2 && r2 >= r1)){
        printf("Amarelo\n");
        return 0;
    }
    return 0;
}