#include <stdio.h>
#include <stdlib.h>


char random_char();

int main() {
    printf("%s", random_char());
    return 0;
}

char random_char(){
    char letter = 'A' + (rand() % 26);
    return letter;
}
