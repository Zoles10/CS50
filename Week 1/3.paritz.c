#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int n= get_int("n:");
    if (n%2 == 0)
    {
        printf("The number in even");
    }
    else
    {
        printf("The number is odd");
    }
}