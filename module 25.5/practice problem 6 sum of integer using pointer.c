#include <stdio.h>
int main()
{
   int a, b, c, *p, *q, *r, sum;

   //printf("Enter two integers to add\n");
   scanf("%d %d %d", &a, &b,&c);

   p = &a;
   q = &b;
   r = &c;

   sum = *p + *q + *r;

   //printf("Sum of the numbers = %d\n", sum);
   printf("%d\n", sum);

   return 0;
}
