#include <stdio.h>
void starpattern(int row)
{
    for( int i=0; i<row; i++)
    {
        for( int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reversestarpattern(int row)
{
    for( int i=0; i<row; i++)
    {
        for( int j=0; j<=row-i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int row, type;
    printf("enter o for reverse star attern and 1 for star pattern \n");
    scanf("%d",&type);
    printf("how many rows you want\n");
    scanf("%d",&row);
    switch (type)
    {
        case 0:
        starpattern(row);
        break; 

        case 1:
        reversestarpattern(row);
        break;

        default:
        printf("you have enter invalid");
        break;
    }
    return 0;
}
