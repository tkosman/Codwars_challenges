#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int get_sum1(int n)
{
    int sum = 0;
    for(int j = 0; j <= n; j++)
      for(int i = j; i <= n; i++)
        sum += 2 * j + i + 1;
    
    return sum;
} 
//1 2 3
//  4 5
//    7

unsigned long long get_sum(unsigned n) {
  unsigned long long result = 0;
  
  for (unsigned long long i = 1; i <= n + 1; i++) {
      result += (i + (i - 1)) * i;
  }
  
  return result;
}

int main()
{
    printf("%llu", get_sum(3));
}