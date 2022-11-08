#include <stdio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf(" %d",&age);
    printf(" you have enter %d your age",age);
    if (age>=18)
    {
        printf(" you can vote");
    }
     else if (age>=10)
    {
        printf(" you can vote betwwen 10 to 18 group party");
    }
    else if (age>=5)
    {
        printf(" you can vote betwwen 5 to 18 as teenager group party");
    }
    else if (age >= 2)
    {
        printf(" you cannot vote sorry baby");
    }
    return 0;
}