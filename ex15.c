#include <stdio.h>
int main(int argc, char *argv[]){


    int c = 10;
    int *ptr;
    ptr = &c;
    printf("Pointer value: %d \n", *ptr);
   

    return 0;
}
