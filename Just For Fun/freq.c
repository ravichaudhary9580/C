#include <stdio.h>
#include <string.h>

void count_characters(char *str) {
    int freq[256] = {0}; // Initialize an array to store character frequencies

    // Traverse the string and update the frequency array
    for (int i = 0; str[i]; i++) {
        freq[str[i]]++;
    }

    // Print the character frequencies
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c': %d\n", i, freq[i]);
        }
    }
}

int main() {
    char *str = "hello, world!";
    count_characters(str);
    return 0;
}
