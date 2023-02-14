#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float determinant = sqrt(b*b - 4*a*c);
    float denominator = 2*a;
    printf("Please enter the value of a");
    scanf("%f", &a);
    printf("Please enter the value of b");
    scanf("%f", &b);
    printf("Please enter the value of c");
    scanf("%f", &c);
    printf("The first value of x is : %f", (-b + determinant)/denominator);
    printf("The second value of x is : %f", (-b - determinant)/denominator);
    return 0;
}
