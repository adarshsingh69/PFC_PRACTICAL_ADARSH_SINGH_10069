#include <stdio.h>    

int main()           //Adarsh singh, ERP-10069
{
    int arr[10][10], r, c, i, j;
    int sum;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        sum = 0;
        for(j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
//Output
// Enter number of rows: 3
// Enter number of columns: 2
// Enter elements of the 2D array:
// 1
// 4
// 7
// 8
// 5
// 0
// Sum of row 1 = 5
// Sum of row 2 = 15
// Sum of row 3 = 5

