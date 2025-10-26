// we assign value in array and print
#include <stdio.h>

int main() {
    // int arr[5] = {1, 2, 3, 4, 5}; // direct assign
    // int arr[5] = {0};             // {0,0,0,0,0} only valid for 0

    // take input by user
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // print array
    for (int j = 0; j < 5; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}
