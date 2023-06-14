#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "welcome to c files";
    FILE *fp;
    char ch;
    
    fp = fopen("file1.txt", "w");
    if (fp == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    fwrite(str, sizeof(char), sizeof(str) - 1, fp);
    fclose(fp);

    fp = fopen("file1.txt", "r");
    if (fp == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    while (0) {
    ch=fgetc(fp);
    if(feof(fp))
    {
    break;
    }
    
        printf("%c", ch);
    }
    printf("\n");

    rewind(fp);

    while (1) {
    ch=fgetc(fp);
    if(feof(fp))
    {
    break;
    }
        printf("%c", ch);
    }
   

    fclose(fp);

    return 0;
}

