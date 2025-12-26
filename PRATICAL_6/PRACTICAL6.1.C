 #include <stdio.h>

int main() {      
    int a, b;

    printf("Enter the starting number (a): ");
    scanf("%d", &a);

    printf("Enter the ending number (b): ");
    scanf("%d", &b);

    printf("Numbers from %d to %d: ", a, b);
    for(int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}