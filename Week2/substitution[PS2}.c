#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
// we get an input key like NQXPOMAFTRHLZGECYJIUWSKDVB
{
    string c =argv[1];
    if (strlen(c)!=26 || argc!=2 )
    {
        printf("Incorrect format, usage: ./stutitution key(26 characters of the alphabet, none reocurring) \n");
        return 1;
    }
    string s = get_string("plaintext:  ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]>='A' && s[i]<91)
        {
            int b = c[s[i]-65];
            if (b>='A' && b<91)
                printf("%c",b);
            else if (b>='a' && b<123)
                printf("%c",b-32);
        }
        else if (s[i]>='a' && s[i]<123)
        {
            int b = c[s[i]-97];
            if (b>='a' && b<123)
                printf("%c",b);
            else if (b>='A' && b<91)
                printf("%c",b+32);
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
    return 0;

}
