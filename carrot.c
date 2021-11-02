#include <stdio.h>

int main() {
    unsigned int contestants, hufflepuff;
    char describe[10000];

    scanf("%u %u", &contestants, &hufflepuff);


    for(int i = 0; i<contestants; i++){
        fgets(describe, sizeof(describe), stdin);
    }
    
    printf("%u\n", hufflepuff);
    
    return 0;
}