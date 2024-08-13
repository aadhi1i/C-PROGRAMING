#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, t, compoundInterest;
    int n;

 
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter time period in years: ");
    scanf("%lf", &t);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    
    compoundInterest = principal * pow((1 + rate / (100 * n)), n * t);

  
    printf("Compound Interest after %.2lf years: %.2lf\n", t, compoundInterest);

    return 0;
}