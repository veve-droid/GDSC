#include <stdio.h>
#include <math.h>

int main() {
    float a,b, sum = 0;
    int period;

    scanf("%i", &period);

    for(int i = 0; i<period; i++){
        scanf("%f %f", &a, &b);
        sum += (a*b);
    }
    
    printf("%.3f\n", sum);
    
    return 0;
}