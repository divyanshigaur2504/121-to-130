/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main() {
    char sourceFile[50], destFile[50];
    FILE *src, *dest;
    char ch;


    printf("Enter source filename: ");
    scanf("%s", sourceFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);

  
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }

    
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot create destination file!\n");
        fclose(src);
        return 1;
    }

    
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }


    fclose(src);
    fclose(dest);

    
    printf("File copied successfully to %s\n", destFile);

    return 0;
}
