#include <stdio.h>
int main()
{
    int matrices[3][3]= { 2, 5, 5, 6, 6, 7, 7, 8, 9};
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
          printf(" the matices of 1-9 is %d\n", matrices[i][j]);
        }
    }
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
          printf(" %d\t", matrices[i][j]);
        }
        printf ("\n");
    } 
    return 0;
}   
             