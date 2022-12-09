#include <stdio.h>
int main()
{
    int r, a;
    float pi=3.14;
    printf("enter the value of radius\n");
    scanf("%d",&r);
    a=pi*r*r;
    printf("area of circle is %d", a);
    return 0;
}