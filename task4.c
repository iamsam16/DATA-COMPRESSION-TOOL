#include <stdio.h>
#include <string.h>

void runLengthEncode(char *input) {
    int len = strlen(input);
    int count;

    printf("Compressed Output: ");

    for (int i = 0; i < len; i++) {
        // Count occurrences of current character
        count = 1;
        while (i < len - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        // Print character and its count
        printf("%c%d", input[i], count);
    }

    printf("\n");
}

int main() {
    char input[1000];

    printf("Enter a string to compress (no spaces): ");
    scanf("%s", input);

    printf("Original Input:    %s\n", input);
    runLengthEncode(input);

    return 0;
}
