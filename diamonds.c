#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char *diamond (int n)
{
    if(n % 2 == 0 || n < 0)
        return NULL;

    int ilosc_gwiazdek = n, ilosc_spacji = 0, ilosc_znakow = 0;
    for(int i = 1; i < n; i+=2)
        ilosc_gwiazdek += i * 2;
    for(int i = 1; i <= (n - 1)/2; i++)
        ilosc_spacji += i * 2;
    ilosc_znakow = ilosc_gwiazdek + ilosc_spacji + n + 1;

    char* string = (char*)malloc(ilosc_znakow * sizeof(char));
    printf("%lu\n\n", ilosc_znakow * sizeof(char) + 1);

    int licznik_spacji = (n - 1) / 2;
    int licznik_gwiazdek = 1;
    for (int i = 0; i < (n-1)/2; i++)
    {
        for (int j = 0; j < licznik_spacji; j++)
            strcat(string, " ");
        for (int j = 0; j < licznik_gwiazdek; j++)
            strcat(string, "*");

        strcat(string, "\n");
        licznik_spacji--;
        licznik_gwiazdek += 2;
    }
    for (int i = 0; i < n; i++)
        strcat(string, "*");
    strcat(string, "\n");
    licznik_spacji = 1;
    licznik_gwiazdek = n - 2;
    for (int i = 0; i < (n-1)/2; i++)
    {
        for (int j = 0; j < licznik_spacji; j++)
            strcat(string, " ");
        for (int j = 0; j < licznik_gwiazdek; j++)
            strcat(string, "*");

        strcat(string, "\n");
        licznik_spacji++;
        licznik_gwiazdek -= 2;
    }
    
  

  
// allocate a string on the heap, memory will be freed
	return string;
}


int main()
{
    char* ptr = diamond(3);
    printf("%s", ptr);
    free(ptr);
}