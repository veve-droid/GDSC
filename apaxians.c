#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

char name[250];
    
    scanf("%s", name);
    int len = strlen(name);
    
    // print na
    for(int i=0; i<len; i++){

        if(name[i] != name[i+1]){
            printf("%c", name[i]);
        }

    }

    printf("\n");

return 0;
}