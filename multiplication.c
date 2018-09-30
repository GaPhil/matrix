#include <stdio.h>

void read(int rows, int columns, int matrix[rows][columns]) {
   for(int i = 0; i < rows; i++) {
      for(int j = 0; j < columns; j++) {
         printf("Enter the number at position %d,%d: ", i + 1, j + 1);
         scanf("%d:", &matrix[i][j]);
      }
   }
}

void print(int rows, int columns, int matrix[rows][columns]) {
   for(int i = 0; i < rows; i++) {
      for(int j = 0; j < columns; j++) {
         printf("%d ", matrix[i][j]);
      }
      printf("\n");
   }
   printf("\n");
}

void multiply(int rows, int columns, int rows_b, int columns_a, int matrix_a[rows][columns_a], int matrix_b[rows_b][columns], int matrix_result[rows][columns]) {
   for(int i = 0; i < rows; i++) {
      for(int j = 0; j < columns; j++) {
         matrix_result[i][j] = 0;
         for(int k = 0; k < columns_a; k++) {
            matrix_result[i][j] += matrix_a[i][k] * matrix_b[k][j];
         }
      }
   }
}

int main() {
   int rows_a, rows_b;
   int columns_a, columns_b;
   printf("Enter the number of rows of matrix A: ");
   scanf("%d", &rows_a);
   printf("Enter the number of columns of matrix A: ");
   scanf("%d", &columns_a);
   printf("Rows: %d and Columns: %d\n", rows_a, columns_a);

   int matrix_a[rows_a][columns_a];
   read(rows_a, columns_a, matrix_a);
   print(rows_a, columns_a, matrix_a);

   printf("Enter the number of rows of matrix B: ");
   scanf("%d", &rows_b);
   printf("Enter the number of columns of matrix B: ");
   scanf("%d", &columns_b);
   printf("Rows: %d and Columns: %d\n", rows_b, columns_b);

   if(rows_a != columns_a && rows_b != columns_a) {
      printf("\nERROR: Matrix dimensions incorrect!\n");
      return 0;
   }

   int matrix_b[rows_b][columns_b];
   read(rows_b, columns_b, matrix_b);
   print(rows_b, columns_b, matrix_b);

   int matrix_result[rows_a][columns_b];
   multiply(rows_a, columns_b, rows_b, columns_a, matrix_a, matrix_b, matrix_result);
   printf("Resulting matrix:\n");
   printf("Rows: %d and Columns: %d\n", rows_a, columns_b);
   print(rows_a, columns_b, matrix_result);
}
