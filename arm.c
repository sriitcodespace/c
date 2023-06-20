#include <stdio.h>
int main() {
    int n,r,sum= 0,t;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    
    t = n;

    while (t>0) {
       
        r = t% 10;
        
       sum += r*r*r;
        
       
       t /= 10;
    }

    if (sum == n){
        printf("%d is an Armstrong number.", n);}
    else{
        printf("%d is not an Armstrong number.", n);

}
    return 0;
}
