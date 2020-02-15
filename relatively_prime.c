#include<stdio.h>

int main(){
    int p,i,j;
    int remainder = 2;
    int divident, divisor;

    scanf("%d", &p);

    for(i = 2 ; i < p ; i++){

        divident  = p;
        divisor = i;

        while(divisor != 0){

            remainder = divident % divisor;
            divident = divisor;
            divisor = remainder;
        }

        if(divident == 1){
            printf("%d \n" ,i);
        }
    }
    return 0;

}
