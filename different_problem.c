#include<stdio.h>
#include <stdlib.h>

int main() {
    unsigned long long int input[2], diff;

    scanf("%llu %llu", &input[0], &input[1]);


    if(input[0] < input[1]){
        printf("%llu \n", input[1] - input[0]);
    }
    else printf("%llu \n", input[0] - input[1]);
    
    
    return 0;
}