#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
    printf("running");
    srand(time(NULL));
    int num = rand();
    printf("number: %d",num);
    char buffer[10];

    if(num < 10){
        return 0;
    }

    for (int i = 0; i < num; i++) {
        buffer[i] = 'X';
    }
    buffer[num] = '\0';


    printf("Buffer contents: %s\n", buffer);
    return 0;
}