#include <stdio.h> 

void main() 
{
   int i, j; 
   char alph = 'A'; 
   int n=5, blk;
   int ctr = 1; 

   for (i = 1; i <= n; i++) 
   {
       for(blk = 1; blk <= n - i; blk++) 
           printf("  ");

       for (j = 0; j <= (ctr / 2); j++)
       {
           printf("%c ", alph++);
       }

       alph = alph - 2; 

       for (j = 0; j < (ctr / 2); j++) 
       {
           printf("%c ", alph--);
       }

       ctr = ctr + 2; 
       alph = 'A'; 

       printf("\n"); 
   }
}
