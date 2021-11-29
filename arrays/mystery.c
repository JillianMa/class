#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main() {
    string input = get_string("Enter a string: ");
    char ch = get_char("Enter a character: ");
    int count = 0;
    int len = strlen(input);

    for (int i = 0; i < len; i++) {
        if (ch == input[i])
            count++;
    }

    printf("There are %d %c's in \"%s\"\n", count, ch, input);
}
