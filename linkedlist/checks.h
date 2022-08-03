#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define BUFFER_SIZE 1024
#define MAX_NAME_LENGTH 32

int clearbuffer (char buf2[BUFFER_SIZE]) {
     bool isDataValid2;
     
     strcpy(buf2, "");
     
    isDataValid2 = false;
    while (isDataValid2 == false){

        printf("\nre-enter input: ");
        scanf("%s", buf2);

        if (strlen(buf2) > MAX_NAME_LENGTH) {
            printf("\nThat input is out of range, re-enter input! : ");
            continue;
        } else {
            isDataValid2 = true;
        }
    }
}

int checkString (char buf[BUFFER_SIZE], int size_t ) {
    
    //  size_t buf_len = (int)strlen(buf);
     int buf_len = (int)strlen(buf);
     if (buf_len <= size_t) {
        return 0;
     } else {
        printf("\nthis string length is out of range");
        clearbuffer(buf);
        return (buf_len - size_t);
     };
     return -1;
}