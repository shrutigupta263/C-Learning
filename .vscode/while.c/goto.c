#include <stdio.h>
int main()
{
    int x;
    for( int i=0; i<5; i++)
    {
        printf("\nhey shruti\n");
        for(int j; j<5; j++)
        {
            printf ( "type any number and to exit press:1\n");
            scanf("%d",&x);
            if (x==1)
            {
                goto end;
            }
        }
    }
    end:
    printf("\'for\' loops are skipped press 1");
    return 0;
}
