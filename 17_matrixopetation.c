#include <stdio.h>

#define ROWS 3
#define COLS 3

void add_matrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS]) {
    int result[ROWS][COLS];
    int i, j;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Result of matrix addition:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void multiply_matrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS]) {
    int result[ROWS][COLS];
    int i, j, k;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (k = 0; k < COLS; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Result of matrix multiplication:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void transpose_matrix(int mat[ROWS][COLS]) {
    int result[COLS][ROWS];
    int i, j;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[j][i] = mat[i][j];
        }
    }

    printf("Result of matrix transpose:\n");
    for (i = 0; i < COLS; i++) {
        for (j = 0; j < ROWS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    int matrix1[ROWS][COLS] ;
    int matrix2[ROWS][COLS];
       int i,j;
    printf("Enter the elements of the matrix 1:");
 
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        scanf("%d",&matrix1[i][j]);
    }
     printf("Enter the elements of the matrix 2:");
 
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        scanf("%d",&matrix2[i][j]);
    }

   
    while(1){
            printf("Enter 1 for matrix addition, 2 for matrix multiplication, 3 for matrix transpose: ");

         scanf("%d", &choice);

    switch (choice) {
        case 1:
            add_matrices(matrix1, matrix2);
            break;
        case 2:
            multiply_matrices(matrix1, matrix2);
            break;
        case 3:
            transpose_matrix(matrix1);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    }

    return 0;
}
