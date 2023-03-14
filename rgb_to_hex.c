#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copyString(char s[])
{
    char* s2;
    s2 = (char*)malloc(20);
 
    strcpy(s2, s);
    return (char*)s2;
}

void rgb(int r, int g, int b, char *output)
{
    long quotient = r * g * b, remainder;
    int i = 0, j = 0, znacznik = 0;
    char hexadecimalnum[100], new_hexadecimalnum[100];
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
    output = copyString(new_hexadecimalnum);
    printf("%s", hexadecimalnum);
}

int main()
{
   rgb(10, 26, 199, "");


   return 0; 
}