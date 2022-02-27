#include <stdio.h>

int main(){
    int soldados_al, tanques_al, avioes_al, misseis_al;
    int soldados_in, tanques_in, avioes_in, misseis_in;
    int soldados_re, tanques_re, avioes_re, misseis_re;

    scanf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d", 
    &soldados_al, &tanques_al, &avioes_al, &misseis_al,
    &soldados_in, &tanques_in, &avioes_in, &misseis_in,
    &soldados_re, &tanques_re, &avioes_re, &misseis_re);
    
    int cont_inimigo=0, cont_aliado=0;

    if((soldados_in + soldados_re) > soldados_al)
        cont_inimigo++;
    else if((soldados_in + soldados_re) < soldados_al)
        cont_aliado++;
    if((tanques_in + tanques_re) > tanques_al)
        cont_inimigo++;
    else if((tanques_in + tanques_re) < tanques_al)
        cont_aliado++;
    if((avioes_in + avioes_re) > avioes_al)
        cont_inimigo++;
    else if((avioes_in + avioes_re) < avioes_al)
        cont_aliado++;
    if((misseis_in + misseis_re) > misseis_al)
        cont_inimigo++;
    else if((misseis_in + misseis_re) < misseis_al)
        cont_aliado++;

    if(cont_inimigo > 2)
        printf("Recuar\n");
    else if(cont_aliado > 2)
        printf("Avancar\n");
    else
        printf("Permanecer\n");

    return 0;
}

