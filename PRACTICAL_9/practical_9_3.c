#include <stdio.h>     

int main()             //Adarsh singh 10069
{
    int arr[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }

    printf("Sum of even elements = %d\n", sum);

    return 0;
}
//Output
// Enter number of elements: 4
// Enter array elements:
// 1
// 2
// 3
// 4
// Sum of even elements = 6

