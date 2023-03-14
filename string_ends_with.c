#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool solution(const char *string, const char *ending)
{
    int Lstring = strlen(string), Lending = strlen(ending);

    if(Lending > Lstring) return false;

    for(int i = 0; i < Lending; i++)
      if(string[Lstring - Lending + i] != ending[i]) return false;
      
    return true;
}

int main ()
{
    printf("%d", solution("d", "bc"));

    return 0;
}