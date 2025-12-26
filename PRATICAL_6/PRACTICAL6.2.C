#include <stdio.h>

int main() {           
    int n, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            continue;  
        }
        sum += i;
    }

    printf("Sum of even numbers from 1 to %d = %d\n", n, sum);

    return 0;
}