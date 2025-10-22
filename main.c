#include <stdio.h>

int main(void) {
    int scelta = 0;
    do {
        printf("Welcome in Camilla's Spotify\n");
        printf("1 - add song\n");
        printf("2 - view saved songs\n");
        printf("3 - exit\n");
        do {
            printf("Enter your choice: ");
            scelta = getchar();
            fflush(stdin);
            if (scelta == '1') {
                // inserimento della canzone
            }
            else if (scelta == '2') {
                // stampa
            }
            else if (scelta == '3') {
                // esci
            }
            else {
                printf("Please enter a valid choice\n");
            }
        } while (scelta < '1' || scelta > '3');
    } while (scelta != '3');
    return 0;
}