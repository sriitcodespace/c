#include <stdio.h>

int main() {
    FILE *tx;
    char ch;

    tx = fopen("f.txt", "r");
    if (tx == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    while ((ch = fgetc(tx)) != EOF) {
       
        printf("%c", ch);  
    }

    fclose(tx);

    return 0;
}

