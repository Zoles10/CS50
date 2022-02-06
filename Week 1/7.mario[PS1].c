#include <stdio.h>
#include <cs50.h>
 int main(void)
 {
   int n;
   do
   {
      n = get_int("n: ");
   }
   while(n<1 || n>8);

   int i = 1;
   while (i <= n)
   {
       for(int k=n-1; k>=i; k--)
       {
           printf(" ");
       }
       for(int j=1; j<=i; j++)
       {
           printf("#");
       }
       printf("  ");
       for(int j=1; j<=i; j++)
       {
           printf("#");
       }
       i++;
       printf("\n");
   }
 }