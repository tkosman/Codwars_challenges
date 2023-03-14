#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *vowel_one(const char *input, char *output) {
    unsigned long i;
    for(i = 0; i < strlen(input); i++)
    {
      if(input[i] == 'a' ||
         input[i] == 'e' ||
         input[i] == 'i' ||
         input[i] == 'o' ||
         input[i] == 'u' ||
         input[i] == 'A' ||
         input[i] == 'E' ||
         input[i] == 'I' ||
         input[i] == 'O' ||
         input[i] == 'U' ||
         input[i] == 'y' ||
         input[i] == 'Y')
         output[i]  = '1';
      else
        output[i] = '0';
    }
    i++;
    output[i] = '\0';
    printf("%lu\n", sizeof(output));
    return output;
}

int main()
{
    char* ptr = malloc(9 * sizeof(char));
    printf("%s", vowel_one("vowelOne", ptr));
}