#include <stdio.h>

void mergeArrays(int arr1[], int n1,
                 int arr2[], int n2,
                 int result[]) {

    int i = 0;
    int j = 0;
    int k = 0;

    // Compare elements from both arrays
    while (i < n1 && j < n2) {

        if (arr1[i] <= arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements of first array
    while (i < n1) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < n2) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

void displayArray(int arr[], int n) {

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() {

    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter %d sorted elements:\n", n1);

    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter %d sorted elements:\n", n2);

    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int result[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, result);

    printf("\nFirst Sorted Array:\n");
    displayArray(arr1, n1);

    printf("Second Sorted Array:\n");
    displayArray(arr2, n2);

    printf("\nMerged Sorted Array:\n");
    displayArray(result, n1 + n2);

    return 0;
}
