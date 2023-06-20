#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ip;
    float *fp;

    ip = (int*)malloc(sizeof(int));
    if (ip == NULL) {
        printf("Out of memory\n");
        exit(1);
    }

    fp = (float*)malloc(sizeof(float));
    if (fp == NULL) {
        printf("Out of memory\n");
        exit(1);
    }

    *ip = 10;
    *fp = 12.5;

    printf("ip address %p contains %d\n", (void*)&ip, *ip);
    printf("fp address %p contains %f\n", (void*)&fp, *fp);

    free(ip);
    free(fp);

    return 0;
}

