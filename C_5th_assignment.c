#include <stdio.h>

int main() {
   int n;
   printf("Input the number of row: ");

   while (scanf("%d", &n))
 {
      int a[51][51] = { 0 };
      int i, j;
                a[0][0] = 0;          for (i = 1; i <= n; i++) {
         a[i][0] = 1;
         a[i][i] = 1;
      }

      for (i = 2; i <= n; i++) {
         for (j = 1; j <= n; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
         }
      }

      for (int i = 0; i <= n; i++) {
         for (int j = 0; j <= i; j++) {
            if (n > 1 && n < 50)
               printf("%3d", a[i][j]);
            else
               printf("%4d", a[i][j]);
         }
         printf("\n");
      }
   break;
   }
}