#include <stdio.h>
int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *ptr = a;
    //normal method
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    // // with help of pointer array arithmatic
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d", *(*(a + i) + j));
    //         printf(" ");
    //     }
    //     printf("\n");
    // }
    // with another pointer variable
    for (int i = 0; i < 6; i++)
    {
        printf("%d", *(ptr + i));
        printf(" ");
    }
}