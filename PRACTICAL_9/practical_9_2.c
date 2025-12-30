#include <stdio.h>    

int main()            //Adarsh singh 10069
{
    int arr[100], n, i;
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
//Output
//Enter number of elements: 6
// Enter array elements:
// 9
// 3
// 2
// 6
// 8
// 1
// Maximum element = 9
// Minimum element = 1
