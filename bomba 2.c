#include <stdio.h>
#include <string.h>
using namespace std;
void askname(char *first, char *last)
{
    cout << "Enter your first name: ";
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

    cout <<"Now enter your last name: ";
    gets(last); /* buffer overflow? what's that? */
}
