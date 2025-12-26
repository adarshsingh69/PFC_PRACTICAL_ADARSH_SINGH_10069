#include <stdio.h>

int main() {                 
    int pin, attempts = 0;
    const int correct_pin = 1234; 

    while(attempts < 3) {
        printf("Enter your 4-digit ATM PIN: ");
        scanf("%d", &pin);

        if(pin == correct_pin) {
            printf("PIN correct. Access granted.\n");
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. Attempts left: %d\n", 3 - attempts);
        }
    }

    if(attempts == 3) {
        printf("Maximum attempts reached. ATM card blocked.\n");
    }

    return 0;
}