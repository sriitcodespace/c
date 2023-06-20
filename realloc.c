#include <stdio.h>
#include <stdlib.h>

int main() {
    int *buffer;

    buffer = (int*)malloc(10 * sizeof(int));
    if (buffer == NULL) {
        printf("Error allocating memory");
        exit(1);
    }

    buffer = (int*)realloc(buffer, 20 * sizeof(int));
    if (buffer == NULL) {
        printf("Error reallocating memory");
        free(buffer);
        exit(1);
    }

    printf("Memory successfully allocated\n");
    free(buffer);
    return 0;
}

