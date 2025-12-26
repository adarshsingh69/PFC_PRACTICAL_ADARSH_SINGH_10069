#include <stdio.h>

int main() {              
    // Adrash Singh 10069
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}



// output

// Enter number of lines: 4
// A
// AB
// ABC
// ABCD
