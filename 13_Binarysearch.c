// c program to binary search

#include <stdio.h>

int binarySearch(int arr[], int size, int targetVal);

int main() {
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int myArray[n];
    printf("Enter elements of the array :");
    int j=0;
    for(j=0;j<n;j++)
    scanf("%d",&myArray[j]);
    int myTarget;
    printf("Enter the target element :");
    scanf("%d",&myTarget);

    int result = binarySearch(myArray, n, myTarget);

    if (result != -1) {
        printf("Value %d found at index %d\n", myTarget, result);
    } else {
        printf("Target not found in array.\n");
    }

    return 0;
}

int binarySearch(int arr[], int size, int targetVal) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == targetVal) {
            return mid;
        }

        if (arr[mid] < targetVal) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

