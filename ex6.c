#include <stdio.h>
int main (int argc, char *argv[])
{
    int distance =100;
    float power = 2.345f;
    double super_power = 54789.4532;
    char initial ='A';
    char first_name[] ="Zed";
    char last_name[] = "Shaw";

    printf("Yo are %d miles away.\n", distance);
    printf("Yo have %f levels of power.\n", power);
    printf("Yo are %f awesome super Powers.\n", super_power);
    printf("I have iniital %C.\n", initial);
    printf("I have a First Name %s.\n", first_name);
    printf("I have a Last Name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);
    return 0;
}

