
//C PROGRAM FOR LINEAR SEARCH
#include <stdio.h>

int linearSearch(int arr[], int size, int targetVal);

int main() {
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements : ");
    int j;
    for(j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
    int targetVal;
    printf("enter the target value :");
    scanf("%d",&targetVal);

    int result = linearSearch(arr, n, targetVal);

    if (result != -1) {
        printf("Value %d found at index %d\n", targetVal, result);
    } else {
        printf("Value %d not found\n", targetVal);
    }

    return 0;
}

int linearSearch(int arr[], int size, int targetVal) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == targetVal) {
            return i;
        }
    }
    return -1;
}


