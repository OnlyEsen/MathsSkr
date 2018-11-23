#include<stdio.h>
 
int main()
{
   int a, b, c, d, e, f;
   
   printf("Enter five numbers to find the average\n");
   scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
   
   f = (a + b + c + d + e) / 5;
   
   printf("Result = %d\n", f);
   
   return 0;
}
