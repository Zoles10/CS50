#include <cs50.h>
#include <stdio.h>
#include <string.h>
// stdlib library is for the atoi function, which
// transfors the STR command line input into the key INT
#include <stdlib.h>

int main(int argc, string argv[])
{
    int k = atoi(argv[1]);
    if ((k==0 && argv[1]!=0) || argc!=2)
    {
        printf("Incorrect format, usage: ./caesar key(one number) \n");
        return 1;
    }

    string s = get_string("plaintext:  ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]>='a' && s[i]<123)
        {
            int d = (((s[i]-97)+k)%26)+97;
            printf("%c", d);
        }
        else if (s[i]>='A' && s[i]<91)
        {
            int d = (((s[i]-65)+k)%26)+65;
            printf("%c\n", d);
        }
        else
        {
            printf("%c\n", s[i]);
        }
    }
    printf("\n");
    return 0;
}