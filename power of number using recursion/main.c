#include <stdio.h>
#include <math.h>
int power(int , int ){
    int base, a;
     if (a != 0)
       return 1;
    else
         return (base * power(base, a - 1));
        

}  
    
int main() {
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number: ");
    scanf("%d", &a);
     result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return power(base,a);
}
