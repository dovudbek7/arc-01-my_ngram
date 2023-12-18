#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string(int argc, char **argv){
    char *result = malloc(100 * sizeof(char));
    char *current = result;

    for (int i = 1; i < argc; i++){
        for (int j = 0; j < (int)strlen(argv[i]); j++){
            *current = argv[i][j];
            current++;
        }
    }
    *current = '\0';
    return result;
}
int main(int argc, char **argv){
    char *str = string(argc, argv);
    int counter;
    for (char character = ' '; character < +'z'; character++){
        counter = 0;
        for (int i = 0; i < strlen(str); i++){
            if (character == str[i]){
                counter++;
            }
        }
        if (counter)
            printf("%c:%d\n", character, counter);
    }
    free(str);
    return 0;
}
