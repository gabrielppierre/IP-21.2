#include <stdio.h>

int main(){

    int num1, num2, lado1, lado2, lado3;
    int primo, flag;
    
    scanf("%d__%d-%d", &lado1, &lado2, &lado3); 

    for(int i=0; i<=99; i++){
        num1 = i / lado1;
        primo=0, flag=0;
        for(int j=2; j<num1; j++){
            if(num1 % j == 0){
                primo=1;
            }
        }
        if((primo==0) && num1 >= 2){
            flag++;
        }
        num2 = i / lado2;
        primo=0;
        for(int j=2; j<num2; j++){
            if(num2 % j == 0){
                primo=1;
            }
        }
        if(primo==0 && num2 >= 2){
            flag++;
        }
        if(flag==2){
            
            printf("%d%.2d%d-%d\n", lado1, i, lado2, lado3);
        }
    }
    return 0;
}