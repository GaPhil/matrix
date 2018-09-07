#include <stdio.h>

int main() {
   int rows;
   int columns;
   printf("Enter the number of rows:");
   scanf("%d", &rows);
   printf("Enter the number of columns:");
   scanf("%d", &columns);
   printf("Rows: %d and Columnds: %d\n", rows, columns);

   int matrix[rows][columns];
   for(int i = 1; i <= rows; i++) {
      for(int j = 1; j <= columns; j++) {
         printf("Enter the number at position %d %d ", i, j);
         scanf("%d:", &matrix[i][j]);
      }
   }
}
