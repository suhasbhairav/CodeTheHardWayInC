#include <stdio.h>
int main(int argc, char *argv[]){

    char *names[] = {"Gary", "Paul", "David", "Alex"};
    char **ptr_names = names;
    int i=0;
    for(i=0;i<4;i++){

        printf("First way: %s\n", *(ptr_names+i));
        printf("Second way: %s\n", ptr_names[i]);

    }


    return 0;
}
