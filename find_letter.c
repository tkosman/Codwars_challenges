#include <stdio.h>

char findMissingLetter(char array[], int arrayLength)
{
    int value;
  for(int i = 1; i < arrayLength; i++)
  {
    value = (int)array[i] - (int)array[i - 1];
    if (value != 1)
      return (char)array[i] - 1;
    
  }
  return ' ';
}

int main()
{
    char array[] = {'a','b','c','d','f'};
    printf("%c", findMissingLetter(array, 5));

    return 0;
}