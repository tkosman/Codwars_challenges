#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void move_zeros(int len, int arr[len])
{
    int wskaznik = 0;
    int tab[len];
    for (int i = 0; i < len; i++)
        tab[i] = 0;
    
    for (int i = 0; i < len; i++)
    {
       if(arr[i] != 0)
       {
            tab[wskaznik] = arr[i];
            wskaznik++;
       }
    }
    for (int i = 0; i < len; i++)
        arr[i] = tab[i];
}

int main()
{
    int tab[20] = {9, 0, 0, 9, 1, 2, 0, 1, 0, 1, 0, 3, 0, 1, 9, 0, 0, 0, 0, 9};
    move_zeros(20, tab);
}