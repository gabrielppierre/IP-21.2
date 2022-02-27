#include <stdio.h>
#include <string.h>

int primo(int numero){
    for(int i = 2; i < numero; i++){
        if(numero % i == 0){
            return 0;
        }
    }
    return 1;
}

int tres_primo(int numero){
    
    int i, cont = 0;
    for(i=2; i < numero; i++){
        if(primo(i) && numero % i == 0){
            cont++;
        }
        if(cont == 3) return 1;
    }
    return 0;
}

int main(){

    int somatorio=0, tentativas=0, somatorio_numeros=0, numero, tamanho;
    char palavra[100];

    scanf("%s", palavra);
    tamanho = strlen(palavra);
    for(int i=0; i<tamanho; i++){
        somatorio = somatorio + palavra[i];
    }
    
    if(somatorio % 17 == 0){
        printf("Agora estou Putin, Bonxai!\n");
        return 0;
    }
    
    while((scanf("%d", &numero) != EOF) && (tentativas <= 5)){
        somatorio_numeros += numero;
        tentativas++;
    }
    if(tentativas > 6 || somatorio_numeros < somatorio){
        printf("Bonxai foi de base.\n");
        exit(1);
    }
    else{
        if(tres_primo(somatorio)){
            somatorio = somatorio * 3;
        }
        
        if((somatorio_numeros > somatorio)){
            printf("Agora voce passou dos limites!\n");
        }
        else if(somatorio_numeros == somatorio){
            printf("Parabueins! Voce ajudou Bonxai a escapar.\n");
        }
        
    }
    return 0;
}