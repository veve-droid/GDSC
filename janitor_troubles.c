#include <stdio.h>
#include <math.h>


int main() {

double a, b, c, d, semiPerimeter, maxArea;
    
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    semiPerimeter = (a + b + c + d)/2;
    maxArea = sqrt (
                    (semiPerimeter - a)*
                    (semiPerimeter - b)*
                    (semiPerimeter - c)*
                    (semiPerimeter - d)
                    );

    
    printf("%.15lf\n", maxArea);

return 0;
}