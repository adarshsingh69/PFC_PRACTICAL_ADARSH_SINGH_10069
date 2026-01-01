#include <stdio.h>       

int main()               //Adarsh singh, ERP-10069     
{
    int arr[10][10], n, i, j;
    int sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
} 
//Output
// Enter order of square matrix: 2
// Enter elements of the matrix:
// 3
// 7
// 9
// 8
// Sum of diagonal elements = 11


