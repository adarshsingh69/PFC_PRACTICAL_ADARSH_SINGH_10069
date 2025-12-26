#include <stdio.h>
//adarsh singh 10069
int sumOfDigits(int n) {
    int sum = 0;
    while(n != 0) {
        sum += n % 10;  
        n /= 10;        
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sumOfDigits(n);
    printf("Sum of digits of %d = %d\n", n, result);

    return 0;
}



// output
// Enter a number: 678
// Sum of digits of 678 = 21
