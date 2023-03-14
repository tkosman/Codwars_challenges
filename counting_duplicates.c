#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int tab[36];

int duplicate_count(const char *text)
{
    for (int i = 0; i < 36; i++)
        tab[i] = 0;

    int wynik = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        char znak = text[i];
        if((int)znak <= 57)
            tab[(int)znak - '0']++;
        else if((int)znak <= 90)
            tab[(int)znak - 'A' + 10]++;
        else
            tab[(int)znak - 'a' + 10]++;
    }
    for (int i = 0; i < 36; i++)
        if(tab[i] >= 2)
            wynik++;
    
    return wynik;
}

int main()
{
    printf("%d",duplicate_count("abcdeaB"));

    return 0;
}