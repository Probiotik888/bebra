#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];
    printf("Enter your name: ");
    fgets(name, 255, stdin);
    printf("length = %d\n", strlen(name)); 
    name[strlen(name)-1] = '\0';
    printf("Now enter your last name: ");
    gets(last);
    printf("Hello %s %s!\n", first, last);
    return 0;
}
