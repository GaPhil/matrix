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

void multiply(int matrix_a[rows_a][columns_a], int matrix_b[rows_b][columns_b], int matrix_result[rows_a][columns_b]) {
   int temp;
   for(int i = 0; i < rows_a; i++) {
      for(int j = 0; j < columns_b; j++) {
         // iteraate through the columns of a and add to the rows of b
         for(int k = 0; k < rows_a; k++) {
            temp = matrix_a[i][k] + matrix_b[k][j];
         }
         matrix_result[i][j] = temp;
      }
   }
}

int main() {
   int rows;
   int columns;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   printf("Enter the number of columns: ");
   scanf("%d", &columns);
   printf("Rows: %d and Columns: %d\n", rows, columns);

   int matrix[rows][columns];
   read(rows, columns, matrix);
   print(rows, columns, matrix);

