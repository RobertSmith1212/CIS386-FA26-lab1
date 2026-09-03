#include <stdio.h>
#include <math.h>

double area(double a, double b, double c);

int main(void) {
    
    double a,b,c;
    printf("Enter side 1: ");
    scanf("%lf", &a);
    // printf("%lf\n", a);

    printf("Enter side 2: ");
    scanf("%lf", &b);
    // printf("%lf\n", b);

    printf("Enter side 3: ");
    scanf("%lf", &c);
    // printf("%lf\n", c);

    if (a >= b+c || b >= a+c || c> a+b) {
        printf("Impossible\n");
        return 0;
    }

    if (a==b&&b==c&&c==a){
        printf("Equilateral\n");
        printf("Isosceles\n");
    }
    else if (a==b||b==c||c==a) {
        printf("Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }

    printf("area: %.2lf\n", area(a,b,c));

    return 0;
}

double area(double a, double b, double c) {
    double s = (a+b+c)/2.0;
    double area = sqrt(s * (s-a) * (s-b) * (s-c));
    
    return area;
}