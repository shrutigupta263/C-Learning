#include <stdio.h>
int main()
{
    int marks [3] = { 22, 11, 0,};
    for ( int i=0;i<3;i++)
    {
        printf(" the marks of %d stdents is %d\n",i, marks[i]);
    }
}    


#include <stdio.h>
int main()
{
    int marks [10], sum=0;
    printf(" enter the marks of 10 students: \n\n");
    for (int i=0; i<9; i++)
    {
        printf (" marks of %d stduents :", i+1);
        scanf("%d", &marks[i]);
    } 
     int average = sum/10;
     printf (" \n the average marks of 10 are %d", average);
     return 0;
}
     


