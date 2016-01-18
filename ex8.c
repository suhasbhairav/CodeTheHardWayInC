#include <stdio.h>

int main(int argc, char *argv[]){

    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = {
         'Z', 'e', 'd', 'A', 'S', 'h', 'a', 'w', '\0'
         };
    
    //Warning: On some systems you will have to change
    // %ld to %u since it will use unsigned ints


    printf("Size of an int: %ld\n", sizeof(int));
    printf("Size of areas: %ld\n", sizeof(areas));

    printf("Size of a char:%ld\n", sizeof(char));
    printf("Size of name:%ld\n", sizeof(name));
    
    printf("Size of char array:%ld\n", sizeof(full_name));
    printf("No of characters:%ld\n", sizeof(full_name) /  sizeof(char)); 




    return 0;
}
