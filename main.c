#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    char string[1000];
    printf("Hullo, mate-y!\nGive me a sentence and I'll tell you how many word are in there.\n");
    printf("Your string (it should not pass of 1000 chars): ");
    fgets(string, sizeof(string), stdin);

    bool lastCharWasSpace = true;
    int words = 0;
    int pos = 0;

    while (string[pos] != '\0') {
        if (isspace(string[pos])) {
            if (!lastCharWasSpace) {
                words++;
                lastCharWasSpace = true;
            }
        } else {
            if (lastCharWasSpace) {
                lastCharWasSpace = false;
            }
        }
    }

    printf("\nYour sentence has %d words, mate!\nSee you around.\n", words);
    
    return 0;
}