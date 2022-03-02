#include <stdio.h>
//periodo 21.1
int main(){
    int nlinha, ncoluna;
    scanf("%d %d", &nlinha, &ncoluna);
    int matriz[nlinha][ncoluna];
    
    for(int l=0; l < nlinha; l++){
        for(int c=0; c < ncoluna; c++){
            scanf("%d", &matriz[l][c]);
        }
    }
    for(int co=0; co < ncoluna; co++){
        for(int li=0; li < nlinha; li++){
            printf("%d ",matriz[li][co]);
        }
        printf("\n");
    }
    return 0;
}