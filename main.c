#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;
    char *artist;
    char *album;
    int seconds;
} Song;

char* insertString(int maxLen) {
    int i = 0;
    char c = 0;
    char* arr = (char*) malloc((maxLen + 1) * sizeof(char));
    while (i < maxLen && c != '\n') {
        c = (char)getchar();
        arr[i] = c;
        i++;
    }
    arr[i] = '\0';
    char *newString = (char*)malloc(i * sizeof(char));
    for (int k = 0; k <= i; k++) {
        newString[k] = arr[k];
    }
    free(arr);
    arr = NULL;
    fflush(stdin);
    return newString;
}

int main(void) {
    short int scelta = 0;
    int nSongs = 0;
    Song *songs = (Song*) malloc(sizeof(Song) * 100);
    if (songs == NULL) {
        printf("No memory left\n");
        return 1;
    }
    do {
        printf("Welcome in Camilla's Spotify\n");
        printf("1 - add song\n");
        printf("2 - view saved songs\n");
        printf("3 - exit\n");
        do {
            printf("Enter your choice: ");
            scelta = (short) getchar();
            fflush(stdin);
            if (scelta == '1') {
                if (nSongs % 100 == 0) {
                    songs = (Song*) realloc(songs, sizeof(Song) * (nSongs + 100));
                }
                if (songs == NULL) {
                    printf("No memory left\n");
                }
                else {
                    // creazione della canzone
                    Song *song = (Song*) malloc(sizeof(Song));
                    if (song == NULL) {
                        printf("No memory left\n");
                    }
                    else {
                        char* nome = insertString(100);
                        char* artist = insertString(100);
                        char* album = insertString(100);
                        char* seconds = insertString(5);
                    }
                }
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
    free(songs);
    songs = NULL;
    return 0;
}