#include <stdio.h>

int main() {
    char letter = 'a';

    while (letter <= 'z') {
        printf("%c", letter);
        letter++;
    }
    
    printf("\n");
    
    return 0;
}
