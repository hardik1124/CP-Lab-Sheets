#include <stdio.h>
int main()
{
    int age;
    printf("Enter age of user: ");
    scanf("%d", &age);
    (age >= 18) ? printf("The user can vote.\n") : printf("The user can't vote.");
    return 0;
}