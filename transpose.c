#include <stdio.h>

void read(int rows, int columns, int matrix[rows][columns]) {
   for(int i = 0; i < rows; i++) {
      for(int j = 0; j < columns; j++) {
         printf("Enter the number at position %d %d: ", i + 1, j + 1);
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

void transpose(int rows, int columns, int matrix[rows][columns], int transposed_matrix[columns][rows]) {
   for(int j = 0; j < columns; j++) {
      for(int i = 0; i < rows; i++) {
         transposed_matrix[j][i] = matrix[i][j];
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

   int transposed_matrix[columns][rows]; 
   transpose(rows, columns, matrix, transposed_matrix);
   print(columns, rows, transposed_matrix);
}
