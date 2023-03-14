#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned zero_and_one(const char* string)
{
    int odjac = 0, length = strlen(string);

    for (int i = 1; i < length; i++)
    {
    if ((string[i] == '0' && string[i-1] == '1') || (string[i] == '1' && string[i-1] == '0'))
    {
        odjac += 2;
        i++;
    }
    }
    length -= odjac;
    printf("%d", length);
}

int main ()
{
    zero_and_one("110100");

    return 0;
}