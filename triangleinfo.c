#include <stdio.h>
#include <math.h>

double area(double a, double b, double c );

int main(void) {
    double a,b,c;
    printf("Enter side 1: ");
    scanf("%lf", &a);
    printf("Enter side 2: ");
    scanf("%lf", &b);
    printf("Enter side 3: ");
    scanf("%lf", &c);

    //printf("%lf\n", a);

    // check if triangle is impossible, one size is >= than the other 2 added together
    if ( (a >= b+c) || (b >= a+c) || (c> a+b) ) {
        printf("impossible\n");
        return 0;
    }

    int ab_equal = (a==b);
    int bc_equal = (b==c);
    int ac_equal = (a==c);

    if(ab_equal && bc_equal) {
        // 
        printf("equilateral\n");
        printf("isosceles\n");
    }
    else if (ab_equal || bc_equal || ac_equal) {
        printf("isosceles\n");
    }
    else {
        printf("scalene\n");
    }

    printf("area: %.2lf\n", area(a,b,c) );

    return 0;
}

// Heron's formula
double area(double a, double b, double c ) {
    // sqrt( s * (s-a) * (s-b) * (s-c) ), s = semiperimeter
    double s = (a+b+c)/2.0;
    double area = sqrt( s * (s-a) * (s-b) * (s-c) );

    return area;
}