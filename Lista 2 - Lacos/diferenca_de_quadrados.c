#include <stdio.h>

int main(){

    int entrada=0;
    
    do{
        scanf("%d", &entrada);
        int i, j;
        for(i=0, j=1; (j*j) - (i*i) < entrada; i++, j++){
        }
        if(entrada != 0)
            printf("%d - %d\n", j*j, i*i);
        
    }while(entrada != 0);

    return 0;
}