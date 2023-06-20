#include <stdio.h>



int gcd_recursive(int a, int b);

int main() {
    int a, b, gcd;
    
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &a, &b);
    
   
    

    gcd = gcd_recursive(a, b);
    printf("GCD of %d and %d (recursive): %d\n", a, b, gcd);
    
    return 0;
}


int gcd_recursive(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd_recursive(b, a % b);
    }
}
