#include<stdio.h>

int main() {

   int i, t, n, arr[100];

   printf("Enter the number of Elements:");
   scanf("%d", &n);
   printf("Enter the array elements:");
   for (i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }

   i = 0;
   while (i < n - 1) {
       t = arr[i];
       arr[i] = arr[i + 1];
       arr[i + 1] = t;
       i = i + 2;
   }

   printf("Array list after swapping:");
   for (i = 0; i < n; i++) {
       printf("%d ", arr[i]);
   }

   return 0;
}
