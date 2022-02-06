#include <stdio.h>
#include <math.h>
#include <cs50.h>
int main(void)
{
    float amount = get_float("dollar amount: ");
    int pennies = round(amount * 100);
    printf("Pennies: %i\n",pennies);
}