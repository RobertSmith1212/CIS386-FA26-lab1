#include <stdio.h>

int findMax(int *arr, int n);
int findMin(int *arr, int n);
int findSum(int *arr, int n);


int main(void) {

    int arr[50];
    int n;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, n);
    int min = findMin(arr, n);
    int sum = findSum(arr, n);
    double avg = (double)sum / n;

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Sum: %d\n", sum);
    printf("Average: %.5f\n", avg);

    return 0;

}

int findMax(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int *arr, int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int findSum(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
        }
    return sum;
}