#include <stdio.h>
int main()
{
    int a=6, b=3;
    printf("not swap a=%d and b=%d",a,b);
    a=a*b; //6*3=18
    b=a/b; //18/3=6
    a=a/b; //18/6=3
    printf(" swap a=%d and b=%d",a,b);
    return 0;
}