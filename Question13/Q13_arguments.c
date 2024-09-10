#include<stdio.h>
#include<ctype.h>
#define ALPHABET_SIZE 26
/* Program that prints a table indicating the number of occurrences of each alphabet
 in the text entered as command line arguments.*/

int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("usage: %s <text>\n", argv[0]);
        return 1;
    }

    char *input = argv[1];
    int frequency[ALPHABET_SIZE] = {0};

    // Calculate frequency of each letter
    for(int i = 0; input[i] != '\0'; i++) {
        char inputchar = toupper(input[i]);
        if(isalpha(inputchar)) {
            frequency[inputchar - 'A']++;
        }
    }

    // Print character frequency
    printf("Character frequency:\n");
    for(int i = 0; i < ALPHABET_SIZE; i++) {
        printf("%c\t%d\n", 'A' + i, frequency[i]);
    }

    return 0;
}
