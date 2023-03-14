#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *strsum(const char *a, const char *b)
{
    int a_int = a[0] - '0', b_int = b[0] - '0';
    int wynik = a_int + b_int;
    char* end = malloc(sizeof(char));
    end[0] = wynik + '0';
    return end;
}

int main()
{
    printf("%s", strsum("7", "1"));
}