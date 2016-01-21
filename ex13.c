#include <stdio.h>

int main(int argc, char *argv[]){
    if(argc!=2){
        printf("You need 1 argumnet.\n");
        return 1;
    }
    int i = 0;

    for(i = 0;argv[1][i] != '\0'; i++){
        char letter = argv[1][i];
        switch(letter){
            case 'a':
            case 'A':
                printf("%d: 'A'\n", i);
                break;
            case 'e':
            case 'E':
                printf("%d: 'E'\n", i);
                break;
            default:
                printf("Just another set of characters.\n");


        }


    }


    return 0;
}
