#include <stdio.h>

int main() {
    FILE *pointerFile;
    char *text[100];  // Change the data type to char*
    pointerFile = fopen("C:\\Users\\Nhat Deep TRaiiii\\Desktop\\BT02.txt", "rb");
    if (pointerFile == NULL) {
        printf("Khong mo duoc file\n");
        return 1;
    }
    int numStrings = fread(text, sizeof(char*), 100, pointerFile);  // Read the correct size
    for (int i = 0; i < numStrings; i++) {  // Loop through the strings
        printf("%s\n", text[i]);
    }
    fclose(pointerFile);  // Close the file
    return 0;
}
