#include <stdio.h>

int main() { 
    // Adrash Singh 10069
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Upper half of hourglass
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }

    // Lower half of hourglass
    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}



// output
// Enter n: 5
// 
// *********
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********
