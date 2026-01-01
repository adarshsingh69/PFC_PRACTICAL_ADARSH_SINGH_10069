#include <stdio.h>   

int main()           //Adarsh singh, ERP-10069 
{
    int arr[10][10], r, c, i, j;
    int max, min;

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

    max = arr[0][0];
    min = arr[0][0];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(arr[i][j] > max)
                max = arr[i][j];

            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
//Output
//Enter number of rows: 2
//Enter number of columns: 3
// Enter elements of the 2D array:
// 2
// 3
// 4
// 6
// 8
// 9
// Maximum element = 9
// Minimum element = 2