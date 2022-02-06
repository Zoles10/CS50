#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string s = get_string("Your text: \n");
    float letters = count_letters(s);
    float words = count_words(s);
    float sentences = count_sentences(s);
    printf("%f letters\n",letters);
    printf("%f words\n", words);
    printf("%f sentences\n", sentences);
    float L = (letters) / ((words)/100);
    float S = (sentences)/ ((words)/100);
    float index = 0.0588 * L - 0.296 * S - 15.8;
    if (index<1)
    {
        printf("Before Grade 1");
    }
    else if (index>16)
    {
        printf("Grade 16+");
    }
    else
    {
        printf("Grade %f",round(index));
    }
    printf("\n");
    return 0;

}

int count_letters(string text)
{
    int counter = 0;
    int i;
    for (i = 0; i < strlen(text); i++)
    {
        if ((text[i]>='A' && text[i]<91)||(text[i]>='a' && text[i]<123))
            {
            counter++;
            }
    }
    return counter;
}

int count_words(string text)
{
    int counter = 0;
    int i;
    for (i = 0; i < strlen(text); i++)
    {
        if (text[i]==' ')
        {
            counter++;
        }
    }
    counter++;
    return counter;
}

int count_sentences(string text)
{
    int counter = 0;
    int i;
    for (i = 0; i < strlen(text); i++)
    {
        if ((text[i]=='.'||text[i]=='!'||text[i]=='?')&&text[i+1]==' ')
        {
            counter++;
        }
    }
    counter++;
    return counter;
}
