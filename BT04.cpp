#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *pointer;
    int count = 0;
    char text[1000];
    char filename[] = "C:\\Users\\Nhat Deep TRaiiii\\Desktop\\BT02.txt";
    pointer = fopen(filename, "r");
    if (pointer == NULL) {
        printf("Kh�ng the mo tap tin\n");
        return 1;
    }
    while (fscanf(pointer, "%c", &text[count]) != EOF) {
        printf("%c", text[count]);
        if (text[count] == '\n') {
            count++;
        }
    }
    printf("So d�ng trong file l� %d\n", count);
    fclose(pointer);

    return 0;
}

