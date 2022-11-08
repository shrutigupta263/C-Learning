#include <stdio.h>
int func1(int array[])
{
    for (int i=0; i<4; i++)
    {
        printf("The value at %d \n", array[i]);
    }
    return 0;
}
void func3(int *ptr)
{
    for(int i=0; i<4; i++)
    {
        printf("The value at %d is %d\n",i, *(ptr + i));
    }
    *(ptr + 2)= 645;
}
void func2(int arr[2][2])
{
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            printf("The value at %d, %d is %d\n",i ,j, arr[i][j]);
        }
    }
}
int main ()
{
    int arr[2][2] = {{2, 13} ,{9,7}};
    // printf("The value at index 0 is %d\n", arr[0]);
    //func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);
    func3(arr);
    return 0;
}
