// write a p 2d array

#include<stdio.h>
int main()
{
    int a[3][4];
    printf("enter the number");
    for (int i = 0; i <3; i++)
    {
        for (int j=0; j<4; j++)
        {
            scanf("%d",&a[3][4]);
        }
        
    }
    printf("The 2D array is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    