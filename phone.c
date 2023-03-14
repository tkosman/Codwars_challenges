#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *create_phone_number(char phnum[15], unsigned char n[10])
{
    sprintf(phnum, "(%d%d%d) %d%d%d-%d%d%d%d", n[0], n[1], n[2], n[3], n[4], n[5], n[6], n[7], n[8], n[9]); 

    return phnum;
}

int main()
{
    char empty[15];
    char  *string = create_phone_number(empty, (unsigned char[10])
		{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 });
    printf("%s", string);

}