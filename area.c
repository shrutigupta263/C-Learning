#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2-y1)*(y2-y1)+(x2-x1)*(x2-x1);
    return sqrt(a);
}
float areaOfcircle(int x1, int y1, int x2, int y2, float(*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, y1,x2, y2);
}
int main()
{
    int x1, y1, x2, y2;
    float dst;
    //take x1, y1, x2, y2 from the user using scanf
    printf("enter the value oof x1\n");
    scanf("%d", &x1);

    printf("enter the value of x1\n");
    scanf("%d", &y1);

    printf("enter the value of x1\n");
    scanf("%d", &x2);

    printf("enter the value of x1\n");
    scanf("%d", &y2);

    dst = areaOfcircle(x1, y1, x2, y2, Edistance);
    printf("The distnce betwwen these points is %.2f\n",dst);
    return 0;
}