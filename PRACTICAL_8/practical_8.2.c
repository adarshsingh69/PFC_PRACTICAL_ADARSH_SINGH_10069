#include <stdio.h>
//adarsh singh 10069

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // pass addresses
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}



// output


// Enter two numbers: 7
// 8
// Before swap: x = 7, y = 8
// After swap: x = 8, y = 7
