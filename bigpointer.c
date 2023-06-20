#include <stdio.h>

int main() {
    int a, b;
    int *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    ptr1 = &a;  
    ptr2 = &b;  

    if (*ptr1 > *ptr2) {
        printf("%d is the biggest number\n", *ptr1);  
    } else {
        printf("%d is the biggest number\n", *ptr2); 
    }

    return 0;
}
