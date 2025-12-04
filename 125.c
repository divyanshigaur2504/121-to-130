/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char newLine[200];

    // Take filename from user
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    
    getchar();

    printf("Enter text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    
    fprintf(fp, "%s", newLine);

    fclose(fp);

    
    printf("File updated successfully with appended text.\n");

    return 0;
}
