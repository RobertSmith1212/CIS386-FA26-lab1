#include <stdio.h>
#include <stdlib.h>


void reverse_in_place(int *arr, size_t length);
int* reverse_out_of_place(const int *arr, size_t length);
void print_array(const int *arr, size_t length);


int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    size_t length = sizeof(arr) / sizeof(arr[0]);

    printf("Original: ");
    print_array(arr, length);

    int *reversed = reverse_out_of_place(arr, length);
    printf("Out-of-place: ");
    print_array(reversed, length);

    printf("Original again: ");
    print_array(arr, length);

    reverse_in_place(arr, length);
    printf("In-place reversed: ");
    print_array(arr, length);

    free(reversed);
}

void reverse_in_place(int *arr, size_t length) {
    int *left = arr;
    int *right = arr + length - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int* reverse_out_of_place(const int *arr, size_t length) {
    int *result = malloc(length * sizeof(int));

    if (result == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < length; i++) {
        result[i] = arr[length - 1 - i];
    }
    return result;
}

void print_array(const int *arr, size_t length) {
    for (size_t i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}