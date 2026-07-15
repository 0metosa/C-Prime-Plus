#include <stdio.h>
int main(void)
{
    char first_name[30];
    char last_name[30];

    printf("Please enter your first name and your last name:\n");
    scanf("%s %s", first_name, last_name);
    printf("Your name is: %s %s", first_name, last_name);

    return 0;
}