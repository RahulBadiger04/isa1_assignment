//INSERSTION SORT
#include <stdio.h>

int main() {
    printf("Enter the size of the array\n");
    int n;
    scanf("%d",&n);
    int array[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for (int i = 1; i < n; i++) {
        int insertIndex = i;
        int currentValue = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > currentValue) {
            array[j + 1] = array[j];
            insertIndex = j;
            j--;
        }
        array[insertIndex] = currentValue;
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}