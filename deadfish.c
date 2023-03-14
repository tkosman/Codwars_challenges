#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *parse (const char *program)
{
    int *array = malloc(sizeof(program));

    int value = 0, licznik = 0;
    
    for(int i = 0; i < sizeof(program); i++)
    {
        printf("%d\n", i);
        switch (program[i])
        {
        case 'i':
            value++;
            break;
        case 'd':
            value--;
            break;
        case 's':
            value *= value;
            break;
        case 'o':
            array[licznik] = value;
            licznik++;
            break;
        }
    }
    free(array);
	return array;
}

int main()
{
    int* tab = parse("iiisdoso");

    for (int i = 0; i < sizeof(tab); i++)
    {
        printf("%d ", tab[i]);
    }
    
}