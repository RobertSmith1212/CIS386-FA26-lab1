#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void) {
    
    printf("Enter a string: ");


    char word[50];
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';
    
    int left = 0;
    int right =strlen(word) - 1;
    int palindrome_bool = 1;

    while (left < right) {

       if (!isalpha(word[left])) {
        left++;
        continue;
       }

       if (!isalpha(word[right])) {
        right--;
        continue;
       }

       if (tolower(word[left]) != tolower(word[right])) {
        palindrome_bool = 0;
        break;
        }

        left++;
        right--;

    }


    if (palindrome_bool == 1) {
        printf("This is a Palindrome!");
    }
    else if (palindrome_bool == 0){
        printf("This is not a Palindrome!");
    }

    return 0;
    }
