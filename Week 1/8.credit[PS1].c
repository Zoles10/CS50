#include <stdio.h>
#include <cs50.h>

void validity_test(long number);
void credit_card_test(long number);
int main(void)


{
    long number = get_long("Please enter your credit card number: \n");
    validity_test(number);
    credit_card_test(number);
}


void validity_test(long number)
{
    //checking the first set of digits
    long sum = 0;
    int i = 2;
    long check_number = number;
    while (check_number>0)
    {
        check_number = (check_number / 10);
        long check = (check_number % 10)*2;
        if (i % 2 == 0)
        {
            if(check>=10)
            {
                sum =sum + (check % 10) + ((check / 10) % 10);
            }
            else
            {
                sum = sum + (check_number % 10)*2;
            }
        }
        i++;
    }
    check_number = number;
    i = 1;

    //Checking the second set of digits
    while (check_number>0)
    {
        if (i % 2 == 1)
        {
            sum = sum + (check_number % 10);
        }
        check_number = (check_number / 10);
        i++;
    }
    if (i==14 || i==17)
    {
        if ((sum % 10)==0)
        {
            printf("The credit card IS valid\n");
        }
        else
        {
            printf("The credit card is NOT valid\n");
        }
    }
}

void credit_card_test(long number)
{
    long digit1 = number;
    long digit2 = number;
    int i = 1;
    while (digit1>10)
    {
        digit1 = digit1 /10;
        i++;
    }
    while (digit2>100)
    {
        digit2 = digit2 /10;
    }
    if (digit1==4 &&(i==13 || i==16))
    {
        printf("This is a VISA CARD");
    }
    else if (digit1==3 && (((digit2%10)==4)||(digit1==3 && ((digit2%10)==7))) && i==15)
    {
        printf("This is an AmericanExpress card");
    }
    else if ((digit1==5) && ((digit2%10)==1||(digit2%10)==2||(digit2%10)==3||(digit2%10)==4||(digit2%10)==5) && (i==16))
    {
        printf("This is a MasterCard");
    }
}