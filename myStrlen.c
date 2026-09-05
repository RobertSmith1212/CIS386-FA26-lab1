#include <stdio.h>

int length(int start, int end);

size_t my_strlen (const char *str);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("usage: %s <word>\n", argv[0]);
        return 1;
    }

    printf("length: %zu\n", my_strlen(argv[1]));
    return 0;
}

size_t my_strlen (const char *str)
    {
        const char *start = str;
        const char *end = start;
        while(*end != '\0') {
            end++;
        }

        return end - start;    
    }

