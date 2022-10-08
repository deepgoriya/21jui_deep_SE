#include <stdio.h>
void main (){
   int num[20];
   int d, g, c, n;
   printf("enter number of elements in an array\n");
   scanf("%d", &n);
   printf("Enter the elements\n");
   for (d = 0; d < n; ++d)
      scanf("%d", &num[d]);
   for (d = 0; d < n; ++d){
      for (g = d + 1; g < n; ++g){
         if (num[d] > num[g]){
            c = num[d];
            num[d] = num[g];
            num[g] = c;
         }
      }
   }
   printf("The numbers in ascending order is:\n");
   for (d = 0; d < n; ++d){
      printf("%d\n", num[d]);
   }
}
