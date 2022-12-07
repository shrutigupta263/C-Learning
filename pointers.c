#include <stdio.h>
int main()
{
   char a= '4';
   char *ptra= &a;
   printf ("%d\n",*ptra);
   ptra--;
   printf ("%d\n",*ptra);
   printf("%d",*ptra-1); 
    return 0;
}

