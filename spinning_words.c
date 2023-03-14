#include <stdio.h>
#include <string.h>

char *strrev(char *str){
    char c, *front, *back;

    if(!str || !*str)
        return str;
    for(front = str, back = str + strlen(str) - 1; front < back; front++, back--)
    {
        c = *front;
        *front=*back;
        *back=c;
    }
    return str;
}

int main()
{
    char *zrodlo = "jek";
    char przeznaczenie[50] = "ABC";

    printf("%s", strrev(zrodlo));

    return 0;
}