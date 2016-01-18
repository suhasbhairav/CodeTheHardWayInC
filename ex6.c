#include <stdio.h>

int main(int argc, char *argv[]){

    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";



    printf("You are %d miles away.\n", distance);
    printf("Float : %f\n", power);
    printf("Double : %f\n", super_power);
    printf("Char : %c\n", initial);
    printf("First name: %s\n", first_name);
    printf("Last name: %s\n", last_name);
    printf("Full name: %s %c. %s", first_name, initial, last_name);


    return 0;

}
